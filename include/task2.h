
#pragma once
#include <string.h>


template <typename T>
T gen()
{
return rand()%100;
}

template <typename T, const int N>
T *createArr(T(*gen)())
{
	T *array = new T[N];
	for (int i = 0; i < N; i++)
	{
		array[i] = gen();
	}
	return array;
}
