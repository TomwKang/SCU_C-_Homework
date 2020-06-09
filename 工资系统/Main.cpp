#include<iostream>
using namespace std;
#include "Emploee.h"
#include "Teacher.h"
#include "Tester.h"
#include "Official.h"
#include "Both.h"

int selec1;

int actn(int selec)
{
	int n;
	cout << "\n请问您要进行什么操作?\n"
		"1--录入\n2--显示\n3--搜索ID\n4--搜索名字\n5--删除\n6--获取工资信息\n0--退出\n"
		"请输入数字：";
	cin >> n;
	return n;
}//选择操作函数

void sele()
{
	cout << "\n请问您要对哪一类员工进行操作"
		"\n1（教师）\n2（实验员）\n3（行政人员）\n4（教师兼实验员）\n5（教师兼行政人员）\n (退出请输0) 输入：";
	cin >> selec1;
}//选择职员函数

void select(int selec)
{
	int n;
	while (selec1 != 0)
	{
		if (selec == 1)
		{
			Teacher t1;
			n = actn(selec);
			while (n != 0)
			{
				if (n == 1)
				{
					t1.Input();
				}
				else if (n == 2)
				{
					cout << "显示当前录入职员的信息："<<endl;
					t1.Print();
				}
				else if (n == 3)
				{
					cout << "输入需要查找的ID:";
					int id;
					cin >> id;
					t1.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "输入需要查找的名字:";
					char na[20];
					cin >> na;
					t1.SearchName(na);
				}
				else if (n == 5)
				{
					t1.Delete(0);
				}
				else if (n == 6)
				{
					cout << "输入ID:";
					int id;
					cin >> id;
					t1.GetSalary(id);
				}
				cout << endl;
				n = actn(selec);
			}
			
		}
		else if (selec == 2)
		{
			Tester t2;
			n = actn(selec);
			while (n != 0)
			{
				if (n == 1)
				{
					t2.Input();
				}
				else if (n == 2)
				{
					cout << "显示当前录入职员的信息：" << endl;
					t2.Print();
				}
				else if (n == 3)
				{
					cout << "输入需要查找的ID:";
					int id;
					cin >> id;
					t2.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "输入需要查找的名字:";
					char na[20];
					cin >> na;
					t2.SearchName(na);
				}
				else if (n == 5)
				{
					t2.Delete(0);
				}
				else if (n == 6)
				{
					cout << "输入ID:";
					int id;
					cin >> id;
					t2.GetSalary(id);
				}
				cout << endl;
				n = actn(selec);
			}
		}
		else if (selec == 3)
		{
			Official o;
			n = actn(selec);
			while (n != 0)
			{
				if (n == 1)
				{
					o.Input();
				}
				else if (n == 2)
				{
					cout << "显示当前录入职员的信息：" << endl;
					o.Print();
				}
				else if (n == 3)
				{
					cout << "输入需要查找的ID:";
					int id;
					cin >> id;
					o.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "输入需要查找的名字:";
					char na[20];
					cin >> na;
					o.SearchName(na);
				}
				else if (n == 5)
				{
					o.Delete(0);
				}
				else if (n == 6)
				{
					cout << "输入ID:";
					int id;
					cin >> id;
					o.GetSalary(id);
				}
				cout << endl;
				n = actn(selec);
			}
		}
		else if (selec == 4)
		{
			Both b1;
			n = actn(selec);
			while (n != 0)
			{
				if (n == 1)
				{
					b1.Input();
				}
				else if (n == 2)
				{
					cout << "显示当前录入职员的信息：" << endl;
					b1.Print();
				}
				else if (n == 3)
				{
					cout << "输入需要查找的ID:";
					int id;
					cin >> id;
					b1.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "输入需要查找的名字:";
					char na[20];
					cin >> na;
					b1.SearchName(na);
				}
				else if (n == 5)
				{
					b1.Delete(0);
				}
				else if (n == 6)
				{
					cout << "输入ID:";
					int id;
					cin >> id;
					b1.GetSalary(id);
				}
				cout << endl;
				n = actn(selec);
			}
		}
		else if (selec == 5)
		{
			Both b2;
			n = actn(selec);
			while (n != 0)
			{
				if (n == 1)
				{
					b2.Input();
				}
				else if (n == 2)
				{
					cout << "显示当前录入职员的信息：" << endl;
					b2.Print();
				}
				else if (n == 3)
				{
					cout << "输入需要查找的ID:";
					int id;
					cin >> id;
					b2.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "输入需要查找的名字:";
					char na[20];
					cin >> na;
					b2.SearchName(na);
				}
				else if (n == 5)
				{
					b2.Delete(0);
				}
				else if (n == 6)
				{
					cout << "输入ID:";
					int id;
					cin >> id;
					b2.GetSalary(id);
				}
				cout << endl;
				n = actn(selec);
			}
		}
		cout << endl;
		sele();
	}
	
}//主体操作函数

int main()
{
	{/*Emploee e1;
	e1.Input();
	e1.Print();
	int id;
	cin >> id;
	e1.SearchID(id);
	char n[20];
	cin >> n;
	e1.SearchName(n);*/

	/*Teacher t1;
	t1.Input();
	t1.Print();
	int id;
	cin >> id;
	t1.SearchID(id);
	char n[20];
	cin >> n;
	t1.SearchName(n);*/}

	cout << "欢迎使用高校工资管理系统!"<<endl;

	sele();
	select(selec1);

	cout << "感谢使用SCU高校工资系统！！！" << endl;
	return 0;	
}