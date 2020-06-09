#pragma once
#include "Emploee.h"

double O_allowance[1000];

class Official :
	public Emploee
{
private:
	double Allowance;
public:
	Official();
	Official(int id1, char name1[20], double basesalary1, double allowance1);
	void Input();
	void Print();
	void SearchID(const int i);
	void SearchName(const char n[20]);
	void Delete(int i);
	void GetSalary(int id);
	void Save();
	void Change(int id1);
};

Official::Official() {}

Official::Official(int id1, char name1[20], double basesalary1, double allowance1)
	:Emploee(id1, name1, basesalary1), Allowance(allowance1) {}

void Official::Input()
{
	Emploee::Input();
	cout << "Allowance:";
	cin >> this->Allowance;

	int iD = this->ID - 1;
	O_allowance[iD] = this->Allowance;

	Official::Change(0);
	Official::Save();
}

void Official::Print()
{
	Emploee::Print();
	cout << "Allowance:" << this->Allowance << endl;
}

void Official::SearchID(const int i)
{
	Emploee::SearchID(i);
	cout << "Allowance:" << O_allowance[i - 1] << endl;
}

void Official::SearchName(const char n[20])
{
	int i = 1;
	//cout << strcmp(name[i-1], n)<< endl;
	while (strcmp(name[i - 1], n)) { i++; }
	this->SearchID(i);
}

void Official::Delete(int i)
{
	Emploee::Delete(i);
	O_allowance[i - 1] = 0;
}

void Official::GetSalary(int id)
{
	cout << "Salary:" << this->BaseSalary + O_allowance[id - 1] << endl;
}

void Official::Save()
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
		fprintf(f, "课时: n/a\n");
		fprintf(f, "行政补贴: %f\n", this->Allowance);
		fprintf(f, "工资: %f\n", this->BaseSalary + O_allowance[this->ID - 1]);
		fprintf(f, "\n");
		fclose(f);
	}
}

void Official::Change(int id1)
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

		cout << "Allowance:";
		cin >> this->Allowance;

		id[id1 - 1] = this->ID;
		strcpy_s(name[id1 - 1], this->Name);
		basesalary[id1 - 1] = this->BaseSalary;
		O_allowance[id1 - 1] = this->Allowance;
	}
}