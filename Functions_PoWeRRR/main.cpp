#include <iostream>
using namespace std;

int PoWeRRR(int a, int b, int number);



void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "Введите число: "; cin >> a;
	cout << "Введите степень: "; cin >> b;
	int number = a;
	cout << PoWeRRR(a,b, number) << endl;
}

int PoWeRRR(int a, int b, int number)
{
	for (int i = 2; i <= b; i++)
	{
		number = number * a;
	}
	return number;
}