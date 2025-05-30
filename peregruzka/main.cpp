#include<iostream>
using namespace std;

#define tab "\t"

const int Rows = 5;
const int Cols = 8;

void FillRand(int arr[], const int n, int MinRand = 0, int MaxRand = 100);
void FillRand(double arr[], const int n, int MinRand = 0, int MaxRand = 100);
void FillRand(int arr[Rows][Cols], const int Rows, const int Cols, int MinRand = 0, int MaxRand = 100);

template<typename T> void Print(T arr[], const int n);
template<typename T> void Print(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T> void Sort(T arr[], const int n);
template<typename T> void Sort(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T> T Sum(T arr[], const int n);
template<typename T> T Sum(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T> double AVG(T arr[], const int n);
template<typename T> double AVG(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T> T MinValueIn(T arr[], const int n);
template<typename T> T MinValueIn(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T> T MaxValueIn(T arr[], const int n);
template<typename T> T MaxValueIn(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T> void ShiftLeft(T arr[], const int n, const int number_of_shifts);
template<typename T> void ShiftRight(T arr[], const int n, const int number_of_shifts);
template<typename T> void ShiftLeft(T arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts);
template<typename T> void ShiftRight(T arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");

	//const int n = 10;
	//int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
	//
	//FillRand(arr, n);
	//Print(arr, n);
	//cout << "\n" << "Сумма элементов массива: " << Sum(arr, n) << endl;
	//cout << "\n" << "Среднее арифметическое массива: " << AVG(arr, n) << endl;
	//cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(arr, n) << endl;
	//cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(arr, n) << endl;
	//Sort(arr, n);
	//Print(arr, n);
	//int number_of_shifts;
	//cout << "\n" << "Сдвиг массива влево - "; cin >> number_of_shifts; 
	//ShiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "\n" << "Сдвиг массива вправо - "; cin >> number_of_shifts;
	//ShiftRight(arr, n, number_of_shifts);
	//Print(arr, n);

	//cout << "\n";
	//const int SIZE = 8;
	//double brr[SIZE];
	//FillRand(brr, SIZE);
	//cout << "Вывод массива в double: " << endl;
	//Print(brr, SIZE);
	//cout << "\n" << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	//cout << "\n" << "Среднее арифметическое массива: " << AVG(brr, SIZE) << endl;
	//cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(brr, SIZE) << endl;
	//cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(brr, SIZE) << endl;


	int i_arr_2[Rows][Cols];
	FillRand(i_arr_2, Rows, Cols);
	Print(i_arr_2, Rows, Cols);
	Sort(i_arr_2, Rows, Cols);
	Print(i_arr_2, Rows, Cols);
	cout << "\n" << "Сумма элементов массива: " << Sum(i_arr_2, Rows, Cols) << endl;
	cout << "\n" << "Среднее арифметическое массива: " << AVG(i_arr_2, Rows, Cols) << endl;
	cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(i_arr_2, Rows, Cols) << endl;
	cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(i_arr_2, Rows, Cols) << endl;

	int number_of_shifts;
	cout << "Введите воличество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(i_arr_2, Rows, Cols, number_of_shifts);
	Print(i_arr_2, Rows, Cols);
	cout << "Введите воличество сдвигов: "; cin >> number_of_shifts;
	ShiftRight(i_arr_2, Rows, Cols, number_of_shifts);
	Print(i_arr_2, Rows, Cols);

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

template<typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T> void Print(T arr[Rows][Cols], const int Rows, const int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T> void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T> void Sort(T arr[Rows][Cols], const int Rows, const int Cols)
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
				arr[i][j+1] = arr[i][j];
			}
			arr[i][0] = arr[i - 1][Cols - 1];
		}
		arr[0][0] = buffer;
	}
}