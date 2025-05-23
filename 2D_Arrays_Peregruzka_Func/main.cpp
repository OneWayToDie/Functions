#include<iostream>
using namespace std;

const int Rows = 3;
const int Cols = 4;

void FillRand(int arr[Rows][Cols], const int Rows, const int Cols, int MinRand = 0, int MaxRand = 100);
void FillRand(double arr[Rows][Cols], const int Rows, const int Cols, int MinRand = 0, int MaxRand = 100);

template<typename T>
void Print(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T>
void Sort(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T>
T Sum(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T>
double AVG(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T>
T MinValueIn(T arr[Rows][Cols], const int Rows, const int Cols);
template<typename T>
T MaxValueIn(T arr[Rows][Cols], const int Rows, const int Cols);

void ShiftLeft(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts);
void ShiftRight(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts);


void main()
{
	setlocale(LC_ALL, "");
	
	cout << "Вывод нашего двумерного массива на экран: ";
	int arr[Rows][Cols];
	FillRand(arr, Rows, Cols);
	Print(arr, Rows, Cols);

}

void FillRand(int arr[Rows][Cols], const int Rows, const int Cols, int MinRand, int MaxRand)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = rand() % (MaxRand - MinRand) + MinRand;
		}
	}
}
void FillRand(double arr[Rows][Cols], const int Rows, const int Cols, int MinRand, int MaxRand)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = rand() % (MaxRand - MinRand) + MinRand;
		}
	}
}

template<typename T>
void Print(T arr[Rows][Cols], const int Rows, const int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << "\n\n";
		if(i >= 0)
		cout << "\t\t\t\t\t  ";
	}
	cout << endl;
}

template<typename T>
void Sort(T arr[Rows][Cols], const int Rows, const int Cols)
{

}

template<typename T>
T Sum(T arr[Rows][Cols], const int Rows, const int Cols)
{

}
template<typename T>
double AVG(T arr[Rows][Cols], const int Rows, const int Cols)
{

}

template<typename T>
T MinValueIn(T arr[Rows][Cols], const int Rows, const int Cols)
{

}

template<typename T>
T MaxValueIn(T arr[Rows][Cols], const int Rows, const int Cols)
{

}

void ShiftLeft(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts)
{

}
void ShiftRight(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts)
{

}


