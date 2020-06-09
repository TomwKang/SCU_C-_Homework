#pragma once
#include <cstdio>
#include<string.h>

int id[1000];
char name[1000][20];
double basesalary[1000];

class Emploee
{
protected:
	int ID;
	char Name[20];
	double BaseSalary;
	//int ClassTime;
public:
	Emploee();
	Emploee(int id1, char name1[20], double basesalary1);
	Emploee(const Emploee &e1);
	void Input();
	void Print();
	void SearchID(const int i);
	void SearchName(const char n[20]);
	void Delete(int i); 
	//void Save();
	//void Cout();
};

Emploee::Emploee(){}

Emploee::Emploee(int id1, char name1[20], double basesalary1)
{
	this->ID = id1;
	strcpy_s(this->Name, name1);
	this->BaseSalary = basesalary1;
}

Emploee::Emploee(const Emploee& e1)
{
	this->ID = e1.ID;
	strcpy_s(this->Name, e1.Name);
	this->BaseSalary = e1.BaseSalary;
}
//Emploee::Emploee(int id1, char* name1, double basesalary1 = 0)
//{
//	this->ID = id1;
//	this->Name = name1;
//	this->BaseSalary = basesalary1;
//}

void Emploee::Input()
{
	cout << "请输入需要录入职员的信息" << endl;

	cout << "ID:";
	cin >> this->ID;

	cout << "Name:";
	cin >> this->Name;

	cout << "BaseSalary:";
	cin >> this->BaseSalary;

	int iD = this->ID-1;
	id[iD] = this->ID;
	strcpy_s(name[iD], this->Name);
	basesalary[iD] = this->BaseSalary;//将数据存入全局数组中

}

void Emploee::Print()
{
	cout << "ID:" << this->ID << endl;
	cout << "Name:" << this->Name << endl;
	cout << "BaseSalary:" << this->BaseSalary << endl;
}

void Emploee::SearchID(const int i)
{
	cout << "ID:" << id[i-1] << endl;
	cout << "Name:" << name[i-1] << endl;
	cout << "BaseSalary:" << basesalary[i-1] << endl;
}

void Emploee::SearchName(const char n[20])
{
	int i = 0;
	while (strcmp(name[i], n)){i++;}
	this->SearchID(i);
}

void Emploee::Delete(int i)
{
	cout << "请输入需要删除的职员的ID：";
	cin >> i;
	id[i - 1] = 0;
	memset(name[i - 1], 4, '\0');
	basesalary[i - 1] = 0;
}


/*//FILE* f;
	//f = fopen("C:\\Users\\86187\\Desktop\\salary.txt","rw");
cout << "输入ID：";
cin >> this->ID;
fprintf(f, "ID: %d\n", ID);
cout << "输入名字：";
cin >> this->Name;
fprintf(f, "名字: %s\n", Name);
cout << "输入基本工资：";
cin >> this->BaseSalary;
fprintf(f, "基本工资: %f\n", BaseSalary);
fclose(f);*/
