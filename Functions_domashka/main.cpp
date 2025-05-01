#include<iostream>
using namespace std;

int Factorial(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a = 1, b;
	cout << "Введите число, факториал которого хотите узнать: "; cin >> b;
	cout << Factorial(a,b) << endl;
}

int Factorial(int a, int b)
{
	 for (int i = 1; i <= b; i++)
	 {
		 a = a * i;
	 }
	 return a;
}