#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
	int array[] = { 1, 3, 5, 23, 1, 643, 0, 34, 7, 23, 8 };
	size_t n = sizeof(array) / sizeof(array[0]);
	for (size_t i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	msort(array, n);
	cout << "\n";
	for (size_t i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	int a;
	cin >> a;
	return 0;
}


