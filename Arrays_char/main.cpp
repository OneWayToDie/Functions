#include<iostream>
using namespace std;

#define tab "\t"


void FillRand(char arr[], const char n, int MinRand = 32, int MaxRand = 127);
void Print(char arr[], const char n);
void Sum(char arr[], const char n);
void AVG(char arr[], const char n);
void MinValueIn(char arr[], const char n);
void MaxValueIn(char arr[], const char n);
void Shift_left(char arr[], const char n);
void Shift_right(char arr[], const char n);

void main()
{
	setlocale(LC_ALL, "");

	cout << "Алгоритм для вывода суммы массива в char: " << "\n";
	const char XD = 10;
	char crr[XD];
	FillRand(crr, XD);
	Print(crr, XD);
	Sum(crr, XD);
	cout << "\n" << "Алгоритм для вывода AVG массива в char: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	AVG(crr, XD);
	cout << "\n" << "Алгоритм для вывода минимального значения массива в char: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	MinValueIn(crr, XD);
	cout << "\n" << "Алгоритм для вывода максимального значения массива в char: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	MaxValueIn(crr, XD);
	cout << "\n" << "Алгоритм для сдвига массива влево в char: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	Shift_left(crr, XD);
	Print(crr, XD);
	cout << "\n" << "Алгоритм для сдвига массива вправо в char: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	Shift_right(crr, XD);
	Print(crr, XD);
}

void FillRand(char arr[], const char n, int MinRand, int MaxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
	}
}
void Print(char arr[], const char n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sum(char arr[], const char n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "\n" << "сумма элементов массива - " << sum << "\n";
}
void AVG(char arr[], const char n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "\n" << "Среднее арифметическое - " << sum / n << "\n";
}
void MinValueIn(char arr[], const char n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "\n" << "минимальное значение массива - " << min << endl;
}
void MaxValueIn(char arr[], const char n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "\n" << "максимальное значение массива - " << max << endl;
}
void Shift_left(char arr[], const char n)
{
	int number_of_shifts; cout << "\n" << "Введите количество сдвигов: "; cin >> number_of_shifts;
	char zero;
	for (int j = 0; j < number_of_shifts; j++)
	{
		zero = arr[0];
		for (int i = 0; i < n; i++)
		{
			i + 1 < n ? arr[i] = arr[i + 1] : arr[i] = zero;
		}
	}
}
void Shift_right(char arr[], const char n)
{
	int number_of_shifts; cout << "\n" << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			i - 1 >= 0 && i < n ? arr[i] = arr[i - 1] : arr[i] = buffer;
		}
	}
}