#include<iostream>
using namespace std;
#include<stdio.h>
#include "Complex.h"
#include "rational.h"


int main()
{
	int cho = 0;
	cout << "欢迎使用特殊计算器！\n选择复数输入1，选择有理数输入2,退出输入0:";
	cin >> cho;

	char oper='1';//操作符，为0时退出
	double r = 0, i = 0;
	int n = 0, d = 0;

	while (cho != 0) {
		if (cho == 1)
		{
			cout << "输入你的第一个复数，a b（a为实部，b为虚部）："<<endl;
			cin>>r>>i;
			Complex c1(r, i);
			c1.print();
			cout << "输入算式比如，* a b(输入0退出):";
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
				default: cout << "无效输入" << endl;
				}
				cout << "输入算式比如，* a b(输入0退出):";
				cin >> oper;
			}
		}
		else if (cho == 2)
		{
			cout << "输入你的第一个有理数，a b（a为分子，b为分母）：";
			cin>>n>>d;
			rational r1(n, d);
			r1.print();
			cout << "输入算式比如，* a b:";
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
				default: cout << "无效输入" << endl;
				}
				cout << "输入算式比如，* a b:";
				cin >> oper;
			}

		}
		cout << "选择复数输入1，选择有理数输入2,退出输入0:";
		cin >> cho;
	}

	cout << "谢谢使用本计算器!";
	return 0;

	/*
//Complex类测试
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

//rational类测试
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
