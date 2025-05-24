#include"stdafx.h"

template<typename T>
void Sort(T arr[Rows][Cols], const int Rows, const int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			for (int k = i; k < Rows; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < Cols; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}