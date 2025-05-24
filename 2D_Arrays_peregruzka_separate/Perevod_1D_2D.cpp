#include"stdafx.h"
template<typename T>
void Perevod_v_odnomernbi(T arr[Rows][Cols], const int Rows, const int Cols, int perevod[], int index_massiva)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			perevod[index_massiva] = arr[i][j];
			index_massiva++;
		}
	}
}
template<typename T>
void Perevod_v_2D(T arr[Rows][Cols], const int Rows, const int Cols, int perevod[], int index_massiva)
{
	index_massiva = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = perevod[index_massiva];
			index_massiva++;
		}
	}
}