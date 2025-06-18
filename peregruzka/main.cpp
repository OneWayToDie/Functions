//#include"stdafx.h"
//#include"constants.h"
//#include"FillRand.h" //#include"FillRand.cpp" // реализации нешаблонных функций никогда не подключаются на место вызова
//#include"Print.h"
//#include"Print.cpp" // реализации шаблонных функций в обязательном порядке подключаются на место вызова
//#include"Sort.h"
//#include"Sort.cpp"
//#include"Statistic.h"
//#include"Statistic.cpp"
//#include"Shift.h"
//#include"Shift.cpp"
//
//void main()
//{
//	setlocale(LC_ALL, "");
//
//	//const int n = 10;
//	//int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
//	//
//	//FillRand(arr, n);
//	//Print(arr, n);
//	//cout << "\n" << "Сумма элементов массива: " << Sum(arr, n) << endl;
//	//cout << "\n" << "Среднее арифметическое массива: " << AVG(arr, n) << endl;
//	//cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(arr, n) << endl;
//	//cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(arr, n) << endl;
//	//Sort(arr, n);
//	//Print(arr, n);
//	//int number_of_shifts;
//	//cout << "\n" << "Сдвиг массива влево - "; cin >> number_of_shifts; 
//	//ShiftLeft(arr, n, number_of_shifts);
//	//Print(arr, n);
//	//cout << "\n" << "Сдвиг массива вправо - "; cin >> number_of_shifts;
//	//ShiftRight(arr, n, number_of_shifts);
//	//Print(arr, n);
//
//	//cout << "\n";
//	//const int SIZE = 8;
//	//double brr[SIZE];
//	//FillRand(brr, SIZE);
//	//cout << "Вывод массива в double: " << endl;
//	//Print(brr, SIZE);
//	//cout << "\n" << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
//	//cout << "\n" << "Среднее арифметическое массива: " << AVG(brr, SIZE) << endl;
//	//cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(brr, SIZE) << endl;
//	//cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(brr, SIZE) << endl;
//
//	int i_arr_2[Rows][Cols];
//	FillRand(i_arr_2, Rows, Cols);
//	Print(i_arr_2, Rows, Cols);
//	Sort(i_arr_2, Rows, Cols);
//	Print(i_arr_2, Rows, Cols);
//	cout << "\n" << "Сумма элементов массива: " << Sum(i_arr_2, Rows, Cols) << endl;
//	cout << "\n" << "Среднее арифметическое массива: " << AVG(i_arr_2, Rows, Cols) << endl;
//	cout << "\n" << "Вывод Минимального значения массива: " << MinValueIn(i_arr_2, Rows, Cols) << endl;
//	cout << "\n" << "Вывод Максимального значения массива: " << MaxValueIn(i_arr_2, Rows, Cols) << endl;
//
//	int number_of_shifts;
//	cout << "Введите воличество сдвигов: "; cin >> number_of_shifts;
//	ShiftLeft(i_arr_2, Rows, Cols, number_of_shifts);
//	Print(i_arr_2, Rows, Cols);
//	cout << "Введите воличество сдвигов: "; cin >> number_of_shifts;
//	ShiftRight(i_arr_2, Rows, Cols, number_of_shifts);
//	Print(i_arr_2, Rows, Cols);
//}