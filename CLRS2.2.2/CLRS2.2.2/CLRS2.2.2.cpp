// CLRS2.2.2.cpp : 定义控制台应用程序的入口点。
//
/*
Selection-Sort(arr)
1 for i = 0 to arr.length - 2     <-  c1 x (n - 1)
2   def index_for_min = arr[i]    <-  c2 x (n - 2)
3   for j = i to arr.length - 1   <-  c3 x (n - 2) x n / 2
4     if arr[min] > arr[j]        <-  c4 x (n - 2) x (n / 2 - 1)
5       index_for_min = j         <-  time belongs to range [0, c5 x (n - 2) x (n / 2 - 1)]
6     swap arr[i] and arr[min]    <-  c6 x (n - 2) x (n / 2 - 1)
7 return arr                      <-  c7
*/
#include "stdafx.h"
using namespace std;
void change(int a[],int length)
{
	int j,smallest;
	for (j = 1; j < length; j++){
		smallest = j;
		for (int i = j + 1; i < length; i++){
			if (a[i] < a[smallest]){
				smallest = i;
			}
		}
		int tmp = a[j];
		a[j] = a[smallest];
		a[smallest] = tmp;
	}
	for (int k = 0; k < length; k++){
		cout << a[k] << endl;
	}
}
int main()
{
	int a[8] = { 2, 3, 4, 38, 11, 44, 55, 22 };
	change(a, 8);
	return 0;
}

