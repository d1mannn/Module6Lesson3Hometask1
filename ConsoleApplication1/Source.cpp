#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "Header.h"
#include <locale>
#include <math.h>

using namespace std;

void main()
{	
	setlocale(LC_ALL, "Rus");
	short int task;
	do
	{
		cout << "������� ����� ������� - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				/*1.	�������� ������� int f(int m2, int m1, int m0),
					� ������� ������ �������� ���� ���� ���������� �� ���������.
					��� ������� ��������� � ���������� ����������� �����, 
					������(�����), ������(�������) � ������(�������) ����� �������� ����� 
					�������������� m2, m1, m0.��������� ���������� ������� ���, 
					����� ����� ���������� ��������� x = f() �������� x ��������� 567.*/
				int m2 = 0, m1 = 0, m0 = 0;
				cout << "������� ������ ������� ����� 567!!!\n���������� ����� - " << func(m2, m1, m0) << endl;

			} break;

			case 2:
			{
				/*2.	�������� ��������� ������� � ����� ������ int f(�) � � ������� �������� ����������.����������������� ������ ������������� �������*/
				int a = 10, b = 20, c = 30;
				f(&a, &b, &c);
				f(&a, &b);
			} break;

			case 3:
			{
				/*3.	��������� int u = f(3, 4); double v = f(20.5, 10.5); 
				myofs << �u = � << u << � v = � << v << endl; ���� � 
					���������� u = 7 v = 10 (�.�.�������������� ����� � 
						������������ ����� ����������).�������� ������� f(�, �).*/ // ��� ����� ����� ������?
			} break;

			case 4:
			{
				/*4.	�������� ������� f(double& a, double& b, double c, double q),
					������� ���������� ������ �������������� ������������, ����������
					�������� ����� �, � ������ ���� q(��������).*/

				double a, b, c = 10, q = 45;
				f(a, b, &c, &q);
			} break;

			case 5:
			{
				/*5.	�������� ������� f(double* a, double* b, double c, double q), 
					������� ���������� ������ �������������� ������������, 
					���������� �������� ����� �, � ������ ���� q(��������).*/
				double a = 0, b = 0, c = 10, q = 45;
				f(&a, &b, c, q);
			} break;
		}
	} while (task > 0);

}