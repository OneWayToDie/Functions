#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int MinRand = 0,int MaxRand = 100);
void FillRand(double arr[], const int n, int MinRand = 0,int MaxRand = 100);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sum(int arr[], const int n);
void AVG(int arr[], const int n);
void MinValueIn(int arr[], const int n);
void MaxValueIn(int arr[], const int n);
void Shift_left(int arr[], const int n);
void Shift_right(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "\n" << "Алгоритм для вывода суммы массива в int: " << "\n";
	const int XD = 10;
	int crr[XD];
	FillRand(crr, XD);
	Print(crr, XD);
	Sum(crr, XD);
	cout << "\n" << "Алгоритм для вывода AVG массива в int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	AVG(crr, XD);
	cout << "\n" << "Алгоритм для вывода минимального значения массива в int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	MinValueIn(crr, XD);
	cout << "\n" << "Алгоритм для вывода максимального значения массива в int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	MaxValueIn(crr, XD);
	cout << "\n" << "Алгоритм для сдвига массива влево в int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	Shift_left(crr, XD);
	Print(crr, XD);
	cout << "\n" << "Алгоритм для сдвига массива вправо в int: " << "\n";
	FillRand(crr, XD);
	Print(crr, XD);
	Shift_right(crr, XD);
	Print(crr, XD);
}

void FillRand(int arr[], const int n, int MinRand, int MaxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
	}
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
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
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
void Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "\n" << "сумма элементов массива - " << sum << "\n";
}
void AVG(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "\n" << "Среднее арифметическое - " << sum / n << "\n";
}
void MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "минимальное значение массива - " << min << endl;
}
void MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "максимальное значение массива - " << max << endl;
}
void Shift_left(int arr[], const int n)
{
	int number_of_shifts; cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	int zero;
	for (int j = 0; j < number_of_shifts; j++)
	{
		zero = arr[0];
		for (int i = 0; i < n; i++)
		{
			i + 1 < n ? arr[i] = arr[i + 1] : arr[i] = zero;
		}
	}
}
void Shift_right(int arr[], const int n)
{
	int number_of_shifts; cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			i - 1 >= 0 && i < n ? arr[i] = arr[i - 1] : arr[i] = buffer;
		}
	}
}

