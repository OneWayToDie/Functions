#pragma once
#include"stdafx.h"
#include"constants.h"

template<typename T> T Sum(T arr[], const int n);
template<typename T> T Sum(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T> double AVG(T arr[], const int n);
template<typename T> double AVG(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T> T MinValueIn(T arr[], const int n);
template<typename T> T MinValueIn(T arr[Rows][Cols], const int Rows, const int Cols);

template<typename T> T MaxValueIn(T arr[], const int n);
template<typename T> T MaxValueIn(T arr[Rows][Cols], const int Rows, const int Cols);