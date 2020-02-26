#include <iostream>
#include "task3.h"

using namespace std;

template<typename T>
T change(T a)
{
	return a + 5;
}

int main()
{
	const size_t size = 6;
	int array[size] = { 1, 5, 2, 64, 34, 2};
	map<int, size>(array, change);
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	int a;
	cin >> a;
	return 0;
}