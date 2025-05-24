#include"Print.h"

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
	}
	cout << endl;
}