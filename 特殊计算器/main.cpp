#include<iostream>
using namespace std;
#include<stdio.h>
#include "Complex.h"
#include "rational.h"


int main()
{
	int cho = 0;
	cout << "��ӭʹ�������������\nѡ��������1��ѡ������������2,�˳�����0:";
	cin >> cho;

	char oper='1';//��������Ϊ0ʱ�˳�
	double r = 0, i = 0;
	int n = 0, d = 0;

	while (cho != 0) {
		if (cho == 1)
		{
			cout << "������ĵ�һ��������a b��aΪʵ����bΪ�鲿����"<<endl;
			cin>>r>>i;
			Complex c1(r, i);
			c1.print();
			cout << "������ʽ���磬* a b(����0�˳�):";
			cin >> oper;
			while (oper != '0')
			{
//				scanf("(%f+%fi)", &r,&i);
				cin>>r>>i;
				Complex c2(r, i);
				switch (oper)
				{
				case '+': c1 = c1 + c2; c1.print();  break;
				case '-': c1 = c1 - c2; c1.print();  break;
				case '*': c1 = c1 * c2; c1.print();  break;
				case '/': c1 = c1 / c2; c1.print();  break;
				default: cout << "��Ч����" << endl;
				}
				cout << "������ʽ���磬* a b(����0�˳�):";
				cin >> oper;
			}
		}
		else if (cho == 2)
		{
			cout << "������ĵ�һ����������a b��aΪ���ӣ�bΪ��ĸ����";
			cin>>n>>d;
			rational r1(n, d);
			r1.print();
			cout << "������ʽ���磬* a b:";
			cin >> oper;
			while (oper != '0')
			{
				cin>>n>>d;
				rational r2(n, d);
				switch (oper)
				{
				case '+': r1 = r1 + r2; r1.print();  break;
				case '-': r1 = r1 - r2; r1.print();  break;
				case '*': r1 = r1 * r2; r1.print();  break;
				case '/': r1 = r1 / r2; r1.print();  break;
				default: cout << "��Ч����" << endl;
				}
				cout << "������ʽ���磬* a b:";
				cin >> oper;
			}

		}
		cout << "ѡ��������1��ѡ������������2,�˳�����0:";
		cin >> cho;
	}

	cout << "ллʹ�ñ�������!";
	return 0;

	/*
//Complex�����
Complex c1(2, 2), c2(1, 1), c3(0, 0);
c1.print();
c3 = c1 + c2;
c3.print();
c3 = c1 - c2;
c3.print();
c3 = c1 * c2;
c3.print();
c3 = c1 / c2;
c3.print();

//rational�����
rational r1(3, 2), r2(1, 3), r3(1, 1);
r3 = r1 + r2;
r3.print();
r3 = r1 - r2;
r3.print();
r3 = r1 * r2;
r3.print();
r3 = r1 / r2;
r3.print();*/
}
