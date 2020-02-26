#pragma once

#include <iostream>

using namespace std;

template<typename T, size_t size>
void map(T* arr, T(*change)(T))
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = change(arr[i]);
	}

}