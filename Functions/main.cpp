#include<iostream>
using namespace std;
using std::cout;

int Sum(int a, int b, int c = 0);		//�������� ������� (���������� ������� � Function declaration)
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Sum(a, b, 5);			//������������� ������� (����� ������� � Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a,b) << endl;
	cout << a << " * " << b << " = " << Product(a,b) << endl;
	cout << a << " / " << b << " = " << Quotient(a,b) << endl;
	cout << Sum(15, 16) << endl;
}
int Sum(int a, int b, int c)		//���������� �������(����������� ������� � Function definition)
{
	int d = a + b + c;
	return d;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(int a, int b)
{
	return (double)a / b;
}


