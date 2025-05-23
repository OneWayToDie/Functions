#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int MinRand = 0, int MaxRand = 100);
void FillRand(double arr[], const int n, int MinRand = 0, int MaxRand = 100);

template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Sort(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);
template<typename T>
double AVG(T arr[], const int n);

template<typename T>
T MinValueIn(T arr[], const int n);
template<typename T>
T MaxValueIn(T arr[], const int n);

void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftRight(int arr[], const int n, const int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
	/*FillRand(arr, n);*/
	Print(arr, n);
	cout << "\n" << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "\n" << "Среднее арифметическое массива: " << AVG(arr, n) << endl;
	cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(arr, n) << endl;
	cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts;
	cout << "\n" << "Сдвиг массива влево - "; cin >> number_of_shifts; 
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "\n" << "Сдвиг массива вправо - "; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	const int SIZE = 8;
	double brr[SIZE];
	cout << "\n" << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "\n" << "Среднее арифметическое массива: " << AVG(brr, SIZE) << endl;
	cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(brr, SIZE) << endl;
	cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(brr, SIZE) << endl;


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

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
double AVG(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[0];
	}
	return min;
}
template<typename T>
T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
} // ctrl+r

void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(int arr[], const int n, const int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
}