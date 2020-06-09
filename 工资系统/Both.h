#pragma once
#include "Emploee.h"

class Both :
	public Emploee
{
private:
	double Allowance;
	int ClassTime;
	char o_t;
public:
	Both();
	Both(int id1, char name1[20], double basesalary1, double allowance1, int time, char o_t1);
	void Input();
	void Print();
	void SearchID(const int i);
	void SearchName(const char n[20]);
	void Delete(int i);
	void GetSalary(int id);
	void Save();
	void Change(int id1);
};

Both::Both() {}

Both::Both(int id1, char name1[20], double basesalary1, double allowance1, int time, char o_t1)
	:Emploee(id1, name1, basesalary1), Allowance(allowance1), ClassTime(time),o_t(o_t1) {}

void Both::Input()
{
	Emploee::Input();
	cout << "Allowance:";
	cin >> this->Allowance;
	cout << "ClassTime:";
	cin >> this->ClassTime;

	int iD = this->ID - 1;
	cout << "输入o（代表行政人员）或者t（代表实验员）:";
	cin >> this->o_t;
	while (!(o_t == 'o' || o_t == 't'))
	{
		cout << "输入错误，输入o（代表行政人员）或者t（代表实验员）:";
		cin >> this->o_t;
	}
	if (o_t == 'o')
		O_allowance[iD] = this->Allowance;
	else
		T_allowance[iD] = this->Allowance;	

	Both::Change(0);
	Both::Save();
}

void Both::Print()
{
	Emploee::Print();
	cout << "Allowance:" << this->Allowance << endl;
}

void Both::SearchID(const int i)
{
	Emploee::SearchID(i);
	cout << "Allowance:" << O_allowance[i - 1] << endl;
}

void Both::SearchName(const char n[20])
{
	int i = 1;
	//cout << strcmp(name[i-1], n)<< endl;
	while (strcmp(name[i - 1], n)) { i++; }
	this->SearchID(i);
}

void Both::Delete(int i)
{
	Emploee::Delete(i);
	O_allowance[i - 1] = 0;
}

void Both::GetSalary(int id)
{
	double m;
	cout << "课时费/h:";
	cin >> m;

	if (o_t == 'o')
		cout << "Salary:" << this->BaseSalary + 
		O_allowance[id - 1]+ m * classtime[id - 1] << endl;
	else
		cout << "Salary:" << this->BaseSalary + 
		T_allowance[id - 1]+ m * classtime[id- 1] << endl;
}

void Both::Save()
{
	cout << "是否保存？（y/n）";
	char p;
	cin >> p;
	if (p == 'y')
	{
		FILE* f;
		fopen_s(&f, "C:/Users/86187/Desktop/salary.txt", "a");
		fprintf(f, "ID: %d\n", this->ID);
		fprintf(f, "名字: %s\n", this->Name);
		fprintf(f, "基本工资: %f\n", this->BaseSalary);
		fprintf(f, "课时: %d\n", this->ClassTime);
		double m;
		cout << "课时费/h:";
		cin >> m;
		if (o_t == 'o')
		{	
			fprintf(f, "行政补贴: %f\n", this->Allowance);
			fprintf(f, "工资: %f\n", this->BaseSalary + O_allowance[this->ID - 1] + m * classtime[this->ID - 1]);
		}	
		else
		{
			fprintf(f, "实验室补贴: %f\n", this->Allowance);
			fprintf(f, "工资: %f\n", this->BaseSalary + T_allowance[this->ID - 1] + m * classtime[this->ID - 1]);
		}
		fprintf(f, "\n");
		fclose(f);
	}
}

void Both::Change(int id1)
{
	cout << "是否需要更改职员的信息？（y/n）" << endl;
	char p;
	cin >> p;
	if (p == 'y')
	{
		id1 = this->ID;
		cout << "ID:";
		cin >> this->ID;

		cout << "Name:";
		cin >> this->Name;

		cout << "BaseSalary:";
		cin >> this->BaseSalary;

		cout << "ClassTime:";
		cin >> this->ClassTime;

		cout << "Allowance:";
		cin >> this->Allowance;

		id[id1 - 1] = this->ID;
		strcpy_s(name[id1 - 1], this->Name);
		basesalary[id1 - 1] = this->BaseSalary;
		classtime[id1 - 1] = this->ClassTime;

		if (o_t == 'o')
		{
			O_allowance[id1 - 1] = this->Allowance;
		}
		else
		{
			T_allowance[id1 - 1] = this->Allowance;
		}
	}
}