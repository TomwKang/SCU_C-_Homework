#pragma once
#include "Emploee.h"

double T_allowance[1000];

class Tester :
	public Emploee
{
private:
	double Allowance;
public:
	Tester();
	Tester(int id1, char name1[20], double basesalary1, double allowance1);
	void Input();
	void Print();
	void SearchID(const int i);
	void SearchName(const char n[20]);
	void Delete(int i);
	void GetSalary(int id);
	void Save();
	void Change(int id1);
};

Tester::Tester() {}

Tester::Tester(int id1, char name1[20], double basesalary1, double allowance1)
	:Emploee(id1, name1, basesalary1), Allowance(allowance1) {}

void Tester::Input()
{
	Emploee::Input();
	cout << "Allowance:";
	cin >> this->Allowance;

	int iD = this->ID - 1;
	T_allowance[iD] = this->Allowance;

	Tester::Change(0);
	Tester::Save();
}

void Tester::Print()
{
	Emploee::Print();
	cout << "Allowance:" << this->Allowance << endl;
}

void Tester::SearchID(const int i)
{
	Emploee::SearchID(i);
	cout << "Allowance:" << T_allowance[i - 1] << endl;
}

void Tester::SearchName(const char n[20])
{
	int i = 1;
	//cout << strcmp(name[i-1], n)<< endl;
	while (strcmp(name[i - 1], n)) { i++; }
	this->SearchID(i);
}

void Tester::Delete(int i)
{
	Emploee::Delete(i);
	T_allowance[i - 1] = 0;
}

void Tester::GetSalary(int id)
{
	cout << "Salary:" << this->BaseSalary + T_allowance[id- 1] << endl;
}

void Tester::Save()
{
	cout << "�Ƿ񱣴棿��y/n��";
	char p;
	cin >> p;
	if (p == 'y')
	{
		FILE* f;
		fopen_s(&f, "C:/Users/86187/Desktop/salary.txt", "a");
		fseek(f, (this->ID-1)*64, 0);
		fprintf(f, "ID: %d\n", this->ID);
		fprintf(f, "����: %s\n", this->Name);
		fprintf(f, "��������: %f\n", this->BaseSalary);
		fprintf(f, "��ʱ: n/a\n");
		fprintf(f, "ʵ���Ҳ���: %f\n", this->Allowance);
		fprintf(f, "����: %f\n", this->BaseSalary + T_allowance[this->ID - 1]);
		fprintf(f, "\n");
		fclose(f);
	}
}

void Tester::Change(int id1)
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

		cout << "Allowance:";
		cin >> this->Allowance;

		id[id1 - 1] = this->ID;
		strcpy_s(name[id1 - 1], this->Name);
		basesalary[id1 - 1] = this->BaseSalary;
		T_allowance[id1 - 1] = this->Allowance;
	}
}