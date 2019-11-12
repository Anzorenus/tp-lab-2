#ifndef TASK1_H
#define TASK1_H

using namespace std;

template <typename T>
void merge(T* arr, int n) {
	int middle = n / 2; // ������� �������� ����������� ������������������ � ���������� �������� ������� ���������� ��� ������ ��������
	if (n > 1) { merge(arr, n / 2); }
	if (n > 1) { merge(arr + (n / 2), n - (n / 2)); }
	T* TMP = new T[n];
	int i = 0;   // ������ ������� ����
	int j = middle; // ������ ������� ����
	for (int k = 0; k < n; k++)
	{
		if ((j >= n) || ((i < n / 2) && (arr[i] < arr[j]))) // ���������� � ����������� ������������������ ������� �� ��������� ���� ����� ��� ������� ������� ���� ���� j > r
		{
			TMP[k] = arr[i];
			i++;
		}
		else {
			TMP[k] = arr[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = TMP[i];
	}
}

template <>
void merge(char** arr, int n) {
	int middle = n / 2; // ������� �������� ����������� ������������������ � ���������� �������� ������� ���������� ��� ������ ��������
	if (n > 1) { merge(arr, n / 2); }
	if (n > 1) { merge(arr + (n / 2), n - (n / 2)); }
	char** TMP = new char* [n];
	int i = 0;   // ������ ������� ����
	int j = middle; // ������ ������� ����
	for (int k = 0; k < n; k++)
	{
		if ((j >= n) || ((i < n / 2) && (strlen(arr[i]) < strlen(arr[j])))) // ���������� � ����������� ������������������ ������� �� ��������� ���� ����� ��� ������� ������� ���� ���� j > r
		{
			TMP[k] = arr[i];
			i++;
		}
		else {
			TMP[k] = arr[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = TMP[i];
	}
}

#endif
