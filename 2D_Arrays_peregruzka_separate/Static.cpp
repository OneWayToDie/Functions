#include"stdafx.h"

template<typename T>
T Sum(T arr[Rows][Cols], const int Rows, const int Cols)
{
	int sum = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	return sum;
}

template<typename T>
double AVG(T arr[Rows][Cols], const int Rows, const int Cols)
{
	return (double)Sum(arr, Rows, Cols) / (Rows * Cols);
}

template<typename T>
T MinValueIn(T arr[Rows][Cols], const int Rows, const int Cols)
{
	T min = arr[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

template<typename T>
T MaxValueIn(T arr[Rows][Cols], const int Rows, const int Cols)
{
	T max = arr[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}