#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "Header.h"
#include <locale>
#include <math.h>
using namespace std;

void f(int *a, int *b, int *c)
{	
	setlocale(LC_ALL, "Rus");
	cout << "Сумма трех цифр A B C = " << *a + *b + *c << endl;
}

void f(int *a, int *b)
{	
	setlocale(LC_ALL, "Rus");
	cout << "Произведение двух цифр A B = " << *a * *b << endl;
}

void f(double & a, double & b, double *c, double *q)
{
	b = *c * sin(*q);
	a = sqrt(pow(*c, 2) - pow(b, 2));
	cout << "Длина катетов треугольника равна - " << b << " и " << a << endl;
}

void f(double* a, double* b, double c, double q)
{
	*b = c * sin(q);
	*a = sqrt(pow(c, 2) - pow(*b, 2));
	cout << "Длина катетов треугольника равна - " << *b << " и " << *a << endl;
}

int func(int &m2, int &m1, int &m0)
{	
	m2 = 500;
	m1 = 60;
	m0 = 7;
	int x = m2 + m1 + m0;
	return x;
}