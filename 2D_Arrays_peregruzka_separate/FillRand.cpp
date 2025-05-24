#include"stdafx.h"

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