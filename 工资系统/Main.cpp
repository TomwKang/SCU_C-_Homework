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
	cout << "\n������Ҫ����ʲô����?\n"
		"1--¼��\n2--��ʾ\n3--����ID\n4--��������\n5--ɾ��\n6--��ȡ������Ϣ\n0--�˳�\n"
		"���������֣�";
	cin >> n;
	return n;
}//ѡ���������

void sele()
{
	cout << "\n������Ҫ����һ��Ա�����в���"
		"\n1����ʦ��\n2��ʵ��Ա��\n3��������Ա��\n4����ʦ��ʵ��Ա��\n5����ʦ��������Ա��\n (�˳�����0) ���룺";
	cin >> selec1;
}//ѡ��ְԱ����

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
					cout << "��ʾ��ǰ¼��ְԱ����Ϣ��"<<endl;
					t1.Print();
				}
				else if (n == 3)
				{
					cout << "������Ҫ���ҵ�ID:";
					int id;
					cin >> id;
					t1.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "������Ҫ���ҵ�����:";
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
					cout << "����ID:";
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
					cout << "��ʾ��ǰ¼��ְԱ����Ϣ��" << endl;
					t2.Print();
				}
				else if (n == 3)
				{
					cout << "������Ҫ���ҵ�ID:";
					int id;
					cin >> id;
					t2.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "������Ҫ���ҵ�����:";
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
					cout << "����ID:";
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
					cout << "��ʾ��ǰ¼��ְԱ����Ϣ��" << endl;
					o.Print();
				}
				else if (n == 3)
				{
					cout << "������Ҫ���ҵ�ID:";
					int id;
					cin >> id;
					o.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "������Ҫ���ҵ�����:";
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
					cout << "����ID:";
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
					cout << "��ʾ��ǰ¼��ְԱ����Ϣ��" << endl;
					b1.Print();
				}
				else if (n == 3)
				{
					cout << "������Ҫ���ҵ�ID:";
					int id;
					cin >> id;
					b1.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "������Ҫ���ҵ�����:";
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
					cout << "����ID:";
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
					cout << "��ʾ��ǰ¼��ְԱ����Ϣ��" << endl;
					b2.Print();
				}
				else if (n == 3)
				{
					cout << "������Ҫ���ҵ�ID:";
					int id;
					cin >> id;
					b2.SearchID(id);
				}
				else if (n == 4)
				{
					cout << "������Ҫ���ҵ�����:";
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
					cout << "����ID:";
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
	
}//�����������

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

	cout << "��ӭʹ�ø�У���ʹ���ϵͳ!"<<endl;

	sele();
	select(selec1);

	cout << "��лʹ��SCU��У����ϵͳ������" << endl;
	return 0;	
}