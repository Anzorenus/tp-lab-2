#ifndef TASK1_H
#define TASK1_H

using namespace std;

template <typename T>
void msort(T* arr, int n) {
	int middle = n / 2; // ������� �������� ����������� ������������������ � ���������� �������� ������� ���������� ��� ������ ��������
	if (n > 1) { msort(arr, n / 2); }
	if (n > 1) { msort(arr + (n / 2), n - (n / 2)); }
	T* NewArr = new T[n];
	int i = 0;   // ������ ������� ����
	int j = middle; // ������ ������� ����
	for (int k = 0; k < n; k++)
	{
		if ((j >= n) || ((i < n / 2) && (arr[i] < arr[j]))) // ���������� � ����������� ������������������ ������� �� ��������� ���� ����� ��� ������� ������� ���� ���� j > r
		{
			NewArr[k] = arr[i];
			i++;
		}
		else {
			NewArr[k] = arr[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = NewArr[i];
	}
}

template <>
void msort(char** arr, int n) {
	int middle = n / 2; // ������� �������� ����������� ������������������ � ���������� �������� ������� ���������� ��� ������ ��������
	if (n > 1) { msort(arr, n / 2); }
	if (n > 1) { msort(arr + (n / 2), n - (n / 2)); }
	char** NewArr = new char* [n];
	int i = 0;   // ������ ������� ����
	int j = middle; // ������ ������� ����
	for (int k = 0; k < n; k++)
	{
		if ((j >= n) || ((i < n / 2) && (strlen(arr[i]) < strlen(arr[j])))) // ���������� � ����������� ������������������ ������� �� ��������� ���� ����� ��� ������� ������� ���� ���� j > r
		{
			NewArr[k] = arr[i];
			i++;
		}
		else {
			NewArr[k] = arr[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = NewArr[i];
	}
}

#endif
