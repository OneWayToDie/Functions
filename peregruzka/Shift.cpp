#include"Shift.h"

template<typename T> void ShiftLeft(T arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T> void ShiftRight(T arr[], const int n, const int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
}
template<typename T> void ShiftLeft(T arr[Rows][Cols], const int Rows, const int Cols, int number_of_shifts)
{
	/*for (int i = 0; i < Rows; i++)
	{
		ShiftLeft(arr[i], Cols, number_of_shifts);
	}*/
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 1; j < Cols; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			arr[i][Cols - 1] = arr[i + 1][0];
		}
		arr[Rows - 1][Cols - 1] = buffer;
	}
}
template<typename T> void ShiftRight(T arr[Rows][Cols], const int Rows, const int Cols, int number_of_shifts)
{
	/*for (int i = 0; i < Rows; i++)
	{
		ShiftRight(arr[i], Cols, number_of_shifts);
	}*/
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[Rows - 1][Cols - 1];
		for (int i = Rows - 1; i >= 0; i--)
		{
			for (int j = Cols - 2; j >= 0; j--)
			{
				arr[i][j + 1] = arr[i][j];
			}
			arr[i][0] = arr[i - 1][Cols - 1];
		}
		arr[0][0] = buffer;
	}
}