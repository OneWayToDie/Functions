#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int MinRand = 0,int MaxRand = 100);
void FillRand(double arr[], const int n, int MinRand = 0,int MaxRand = 100);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);


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
