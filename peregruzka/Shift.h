#pragma once
#include"stdafx.h"
#include"constants.h"

template<typename T> void ShiftLeft(T arr[], const int n, const int number_of_shifts);
template<typename T> void ShiftRight(T arr[], const int n, const int number_of_shifts);
template<typename T> void ShiftLeft(T arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts);
template<typename T> void ShiftRight(T arr[Rows][Cols], const int Rows, const int Cols, const int number_of_shifts);