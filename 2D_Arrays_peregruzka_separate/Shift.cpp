#include"stdafx.h"

void ShiftLeft(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts, int perevod[])
{
	int tochka_sdviga;
	for (int j = 0; j < number_of_shifts; j++)
	{
		tochka_sdviga = perevod[0];
		for (int i = 0; i < Rows * Cols; i++)
		{
			i + 1 < Rows * Cols ? perevod[i] = perevod[i + 1] : perevod[i] = tochka_sdviga;
		}
	}
}
void ShiftRight(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts, int perevod[])
{
	ShiftLeft(arr, Rows, Cols, Rows * Cols - number_of_shifts, perevod);
}