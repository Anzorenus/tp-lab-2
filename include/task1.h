#pragma once

#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool comparison(T a, T b)
{
	return a < b;
}

template <typename T>
bool comparison(char* a, char* b)
{
	return strlen(a) < strlen(b);
}


template <typename T> 
void msort(T arr[], size_t s) 
{
	if (s < 2)
	{
		return;
	}

	size_t mid = s / 2;

	msort(arr, mid);
	msort(arr + mid, s-mid);

	T* clon = new T[s];

	size_t clonleft = 0, left = 0, right = s / 2;

	while ((left < s / 2) && (right < s))
	{
		if (comparison(arr[left], arr[right]))
		{
			clon[clonleft++] = arr[left++];
		}
		else
		{
			clon[clonleft++] = arr[right++];
		}
	}

	while (left < s / 2)
	{
		clon[clonleft++] = arr[left++];
	}

	while (right < s)
	{
		clon[clonleft++] = arr[right++];
	}

	for (size_t i = 0; i < s; i++)
	{
		arr[i] = clon[i];
	}
}