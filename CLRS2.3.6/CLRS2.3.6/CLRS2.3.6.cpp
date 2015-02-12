// CLRS2.3.6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int Search_Insertion(int A[],int p,int r,int v){
	int mid;
	if (p <= r){
		mid = ((p + r) / 2);
		if (A[mid] == v){
			return mid;
		}
		else if (A[mid] > v){
			return Search_Insertion(A, p, mid - 1, v);
		}
		else
			return Search_Insertion(A, mid + 1, r, v);
	}
	return p;
}
void Insertion_Sort(int A[]){

	int key,i;
	for (int j = 0; j < 10;j++){
		key = A[j];
		i = Search_Insertion(A, 1, j - 1, key);
		while (j>i)
		{
			A[j] = A[j - 1];
			j = j - 1;
			A[i] = key;
		}
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int A[10] = {5,8,7,11,9,15,22,41,65,2};
	Insertion_Sort(A);
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}

