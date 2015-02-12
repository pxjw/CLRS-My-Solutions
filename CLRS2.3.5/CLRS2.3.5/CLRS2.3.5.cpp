// CLRS2.3.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int iteative_binary_search(int Array[], int v,int length)
{

	int left = Array[0];
	int right = Array[length-1];
	int i = 0;
	int mid = (length / 2);
	while (left <= right&&i<length)
	{
		i++;
		if (v == Array[mid])
			return mid;
			
		else if (v > Array[mid])
			left = Array[mid + 1];
		else
			right = Array[mid - 1];

	}
}
int binary_search(int A[], int key, int p, int r)
{
	int left = p;
	int right = r;

	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);

		if (A[middle] > key)
			right = middle - 1;
		else
			if (A[middle] < key)
				left = middle + 1;
			else
				return middle;
	}

	return -1;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int Array[10] = { 1, 2, 35, 44, 88, 152, 222, 330, 350, 450 };
	int sum = iteative_binary_search(Array, 88,10);
	cout << Array[sum] << endl;
	return 0;
}
