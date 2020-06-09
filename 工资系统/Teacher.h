#pragma once
#include "Emploee.h"

int classtime[1000];

class Teacher :
	public Emploee
{
private:
	int ClassTime;
public:
	Teacher();
	Teacher(int id1, char name1[20], double basesalary1, int time);
	void Input();
	void Print();
	void SearchID(const int i);
	void SearchName(const char n[20]);
	void Delete(int i);
	void GetSalary(int id);
	void Save();
	void Change(int id1);
};

Teacher::Teacher(){}

Teacher::Teacher(int id1, char name1[20], double basesalary1, int time)
	:Emploee(id1, name1, basesalary1),ClassTime(time){}

void Teacher::Input()
{
	Emploee::Input();
	cout << "ClassTime:";
	cin >> this->ClassTime;

	int iD = this->ID - 1;
	classtime[iD] = this->ClassTime;

	Teacher::Change(0);
	Teacher::Save();
}

void Teacher::Print()
{
	Emploee::Print();
	cout << "ClassTime:" << this->ClassTime << endl;
}

void Teacher::SearchID(const int i)
{
	Emploee::SearchID(i);
	cout << "ClassTime:" << classtime[i - 1] << endl;
}

void Teacher::SearchName(const char n[20])
{
	int i = 1;
	//cout << strcmp(name[i-1], n)<< endl;
	while (strcmp(name[i-1], n)) { i++; }
	this->SearchID(i);
}

void Teacher::Delete(int i)
{
	Emploee::Delete(i);
	classtime[i - 1] = 0;
}

void Teacher::GetSalary(int id)
{
	double m;
	cout << "��ʱ��/h:";
	cin >> m;
	cout << "Salary:" << this->BaseSalary + m * classtime[id - 1] << endl;
}

void Teacher::Save()
{
	cout << "�Ƿ񱣴棿��y/n��";
	char p;
	cin >> p;
	if (p == 'y')
	{
		FILE* f;
		fopen_s(&f,"C:/Users/86187/Desktop/salary.txt", "a");
		fprintf(f, "ID: %d\n", this->ID);
		fprintf(f, "����: %s\n", this->Name);
		fprintf(f, "��������: %f\n", this->BaseSalary);
		fprintf(f, "��ʱ: %d\n", this->ClassTime);
		fprintf(f, "����: n/a\n");
		double m;
		cout << "��ʱ��/h:";
		cin >> m;
		fprintf(f, "����: %f\n", this->BaseSalary + m * classtime[this->ID - 1]);
		fprintf(f, "\n");
		fclose(f);
	}
}

void Teacher::Change(int id1)
{

	cout << "�Ƿ���Ҫ����ְԱ����Ϣ����y/n��" << endl;
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

		id[id1 - 1] = this->ID;
		strcpy_s(name[id1 - 1], this->Name);
		basesalary[id1 - 1] = this->BaseSalary;
		classtime[id1 - 1] = this->ClassTime;
	}

}