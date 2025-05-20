#include<iostream>
using namespace std;

#define tab "\t"


void FillRand(double arr[], const int n, int MinRand = 0, int MaxRand = 100);

void Print(double arr[], const int n);

void Sort(double arr[], const int n);
void Sum(double arr[], const int n);
void AVG(double arr[], const int n);
void MinValueIn(double arr[], const int n);
void MaxValueIn(double arr[], const int n);
void Shift_left(double arr[], const int n);
void Shift_right(double arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	cout << "\n" << "�������� ��� ������ ����� ������� � int: " << "\n";
	const int XD = 10;
	double crr[XD];
	FillRand(crr, XD);
	Print(crr, XD);
	Sum(crr, XD);
	cout << "\n" << "�������� ��� ������ AVG ������� � int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	AVG(crr, XD);
	cout << "\n" << "�������� ��� ������ ������������ �������� ������� � int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	MinValueIn(crr, XD);
	cout << "\n" << "�������� ��� ������ ������������� �������� ������� � int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	MaxValueIn(crr, XD);
	cout << "\n" << "�������� ��� ������ ������� ����� � int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	Shift_left(crr, XD);
	Print(crr, XD);
	cout << "\n" << "�������� ��� ������ ������� ������ � int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	Shift_right(crr, XD);
	Print(crr, XD);
}

void FillRand(double arr[], const int n, int MinRand, int MaxRand)
{
	MinRand *= 100;
	MaxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
		arr[i] /= 100;
	}
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "\n" << "����� ��������� ������� - " << sum << "\n";
}
void AVG(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "\n" << "������� �������������� - " << sum / n << "\n";
}
void MinValueIn(double arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "����������� �������� ������� - " << min << endl;
}
void MaxValueIn(double arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "����������� �������� ������� - " << max << endl;
}
void Shift_left(double arr[], const int n)
{
	int number_of_shifts; cout << "������� ���������� �������: "; cin >> number_of_shifts;
	double zero;
	for (int j = 0; j < number_of_shifts; j++)
	{
		zero = arr[0];
		for (int i = 0; i < n; i++)
		{
			i + 1 < n ? arr[i] = arr[i + 1] : arr[i] = zero;
		}
	}
}
void Shift_right(double arr[], const int n)
{
	int number_of_shifts; cout << "������� ���������� �������: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			i - 1 >= 0 && i < n ? arr[i] = arr[i - 1] : arr[i] = buffer;
		}
	}
}