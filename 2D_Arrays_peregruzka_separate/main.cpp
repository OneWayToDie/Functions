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

	cout << "����� ������ ���������� ������� �� �����: " << "\n\n";
	int arr[Rows][Cols];
	FillRand(arr, Rows, Cols);
	Print(arr, Rows, Cols);
	cout << "����� ����������������  ������� �� �����: " << "\n\n";
	Sort(arr, Rows, Cols);
	Print(arr, Rows, Cols);
	cout << "\n" << "����� ��������� �������: " << Sum(arr, Rows, Cols) << endl;
	cout << "\n" << "������� �������������� ���������� �������: " << AVG(arr, Rows, Cols) << endl;
	cout << "\n" << "����� ������������ �������� �������: " << MinValueIn(arr, Rows, Cols) << endl;
	cout << "\n" << "����� ������������ �������� �������: " << MaxValueIn(arr, Rows, Cols) << endl;
	int number_of_shifts;

	const int odnomerka = Rows * Cols;
	int perevod[odnomerka];
	int index_massiva = 0;
	cout << "\n" << "����� ������� �����: "; cin >> number_of_shifts;
	Perevod_v_odnomernbi(arr, Rows, Cols, perevod, index_massiva);
	ShiftLeft(arr, Rows, Cols, number_of_shifts, perevod);
	Perevod_v_2D(arr, Rows, Cols, perevod, index_massiva);
	Print(arr, Rows, Cols);
	cout << "\n" << "����� ������� ������: "; cin >> number_of_shifts;
	ShiftRight(arr, Rows, Cols, number_of_shifts, perevod);
	Perevod_v_2D(arr, Rows, Cols, perevod, index_massiva);
	Print(arr, Rows, Cols);
}
