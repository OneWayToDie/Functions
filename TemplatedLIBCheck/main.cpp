#include<iostream>
#include<FillRand.h>
#include<Print.h>
using namespace std;

template void Print<int>(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	//FillRand(arr, n);
	Print(arr, n);
}