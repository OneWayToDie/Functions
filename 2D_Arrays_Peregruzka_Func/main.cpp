#include<iostream>
using namespace std;

const int Rows = 3;
const int Cols = 4;

void FillRand(int arr[Rows][Cols], const int Rows, const int Cols, int MinRand = 0, int MaxRand = 100);
void FillRand(double arr[Rows][Cols], const int Rows, const int Cols, int MinRand = 0, int MaxRand = 100);

template<typename T>
void Perevod_v_odnomernbi(T arr[Rows][Cols], const int Rows, const int Cols, int perevod[], int index_massiva);
template<typename T>
void Perevod_v_2D(T arr[Rows][Cols], const int Rows, const int Cols, int perevod[], int index_massiva);

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

void ShiftLeft(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts, int perevod[]);
void ShiftRight(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts, int perevod[]);


void main()
{
	setlocale(LC_ALL, "");
	
	cout << "Вывод нашего двумерного массива на экран: " << "\n\n";
	int arr[Rows][Cols];
	FillRand(arr, Rows, Cols);
	Print(arr, Rows, Cols);
	cout << "Вывод отсортированного  массива на экран: " << "\n\n";
	Sort(arr, Rows, Cols);
	Print(arr, Rows, Cols);
	cout << "\n" << "Сумма элементов массива: " << Sum(arr, Rows, Cols) << endl;
	cout << "\n" << "Среднее арифметическое двумерного массива: " << AVG(arr, Rows, Cols) << endl;
	cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(arr, Rows, Cols) << endl;
	cout << "\n" << "Вывод Минимального значения массива: " << MaxValueIn(arr, Rows, Cols) << endl;
	int number_of_shifts;

	const int odnomerka = Rows * Cols;
	int perevod[odnomerka];
	int index_massiva = 0;
	cout << "\n" << "Сдвиг массива влево: "; cin >> number_of_shifts;
	Perevod_v_odnomernbi(arr, Rows, Cols, perevod, index_massiva);
	ShiftLeft(arr, Rows, Cols, number_of_shifts, perevod);
	Perevod_v_2D(arr, Rows, Cols, perevod, index_massiva);
	Print(arr, Rows, Cols);
	cout << "\n" << "Сдвиг массива вправо: "; cin >> number_of_shifts;
	ShiftRight(arr, Rows, Cols, number_of_shifts, perevod);
	Perevod_v_2D(arr, Rows, Cols, perevod, index_massiva);
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
void Perevod_v_odnomernbi(T arr[Rows][Cols], const int Rows, const int Cols, int perevod[], int index_massiva)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			perevod[index_massiva] = arr[i][j]; // переводим двумерный массив в одномерный
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
			arr[i][j] = perevod[index_massiva]; // переводим массив обратно в двумерный
			index_massiva++;
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
	}
	cout << endl;
}

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

template<typename T>
T Sum(T arr[Rows][Cols], const int Rows, const int Cols)
{
	int sum = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			sum = sum + arr[i][j]; // Цикл для нахождения суммы
		}
	}
	return sum;
}

template<typename T>
double AVG(T arr[Rows][Cols], const int Rows, const int Cols)
{
	return (double)Sum(arr, Rows, Cols) / (Rows*Cols);
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

void ShiftLeft(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts, int perevod[])
{
	int tochka_sdviga;
	for (int j = 0; j < number_of_shifts; j++)
	{
		tochka_sdviga = perevod[0];
		for (int i = 0; i < Rows * Cols; i++)
		{
			i + 1 < Rows * Cols ? perevod[i] = perevod[i + 1] : perevod[i] = tochka_sdviga; // делаем сдвиг влево
		}
	}
}
void ShiftRight(int arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts, int perevod[])
{
	ShiftLeft(arr, Rows, Cols, Rows*Cols - number_of_shifts, perevod);
}





