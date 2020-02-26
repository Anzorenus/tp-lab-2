#include <iostream>
#include "task2.h"

using namespace std;

template<typename T>
T gen()
{
	return 3;
}

int main()
{
	size_t N = 3;
	int *array = createArr<int, 3>(&gen);
	for (size_t i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}
	int a;
	cin >> a;
	return 0;
}