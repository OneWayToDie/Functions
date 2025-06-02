#include"Static.h"


template<typename T> T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T> T Sum(T arr[Rows][Cols], const int Rows, const int Cols)
{
	T sum = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	return sum;
}

template<typename T> double AVG(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T> double AVG(T arr[Rows][Cols], const int Rows, const int Cols)
{
	return(double)Sum(arr, Rows, Cols) / Rows / Cols;
}

template<typename T> T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[0];
	}
	return min;
}
template<typename T> T MinValueIn(T arr[Rows][Cols], const int Rows, const int Cols)
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
template<typename T> T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
} // ctrl+r
template<typename T> T MaxValueIn(T arr[Rows][Cols], const int Rows, const int Cols)
{
	T max = arr[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}