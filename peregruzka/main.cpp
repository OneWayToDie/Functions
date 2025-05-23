#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"sort.h"
#include"statistics.h"
#include"shift.h"

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
	/*FillRand(arr, n);*/
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "\n" << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "\n" << "Среднее арифметическое массива: " << AVG(arr, n) << endl;
	cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(arr, n) << endl;
	cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(arr, n) << endl;
	int number_of_shifts;
	cout << "\n" << "Сдвиг массива влево - "; cin >> number_of_shifts; 
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "\n" << "Сдвиг массива вправо - "; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	 
	cout << "\n";
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "\n" << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "\n" << "Среднее арифметическое массива: " << AVG(brr, SIZE) << endl;
	cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(brr, SIZE) << endl;
	cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(brr, SIZE) << endl;
}






