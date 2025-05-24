#include"stdafx.h"
#include"FillRand.h"
#include"Perevod_1D_2D.h"
#include"Print.h"
#include"Sort.h"
#include"Static.h"
#include"Shift.h"

using namespace std;

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
