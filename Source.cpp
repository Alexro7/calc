#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

double sqr(unsigned int a)
{
	double sqr, x1 = 0;
	sqr = double(a);
	while (abs(sqr - x1) > 10e-6)
	{
		x1 = sqr;
		sqr = (x1 + a / sqr) / 2;
	}
	return sqr;
}

double st(int a,int b)
{
	double st = 1;
	
	if (b > 0)
		for (; b > 0; b--)
			st *= a;
	else {
		for (; b < 0; b++)
			st *= a;
		st = 1 / st;
	}
	return st;
}

double sum(double a, double b)
{
	return a + b;
}

double vic(double a, double b)
{
	return a - b;
}

double umn(double a, double b)
{
	return a * b;
}

double del(double a, double b)
{
	return a / b;
}

int main()
{
	double a, b;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите а и b" << endl;
	cin >> a >> b;
	cout << a << "+" << b << "=" << sum(a, b) << endl << a << "-" << b << "=" << vic(a, b) << endl << a << "*" << b << "=" << umn(a, b) << endl;
	cout << a << "/" << b << "=" << del(a, b) << endl << a << "^" << b << "=" << st(a, b) << endl;
		if(a>0) cout<< "sqrt(a)=" << sqr(a) << endl;
	_getch();
}

	

