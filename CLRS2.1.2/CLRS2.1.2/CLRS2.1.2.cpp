// CLRS2.1.2.cpp : 定义控制台应用程序的入口点。
//
/*这是降序，升序只需将while循环改成：
while(key<a[i])
*/
#include "stdafx.h"
#include<iostream>
using namespace std;
//插入排序
//方法为通过插入选择是否大于前者/后者
void INSERT_SORT(int a[],int length){
	int i=0, j, key;
	for (j = 1; j < length; j++){
		key = a[j];
		i = j - 1;
		while (key>a[i]){
			int tmp;
			tmp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = tmp;
			i--;
			if (i < 0){
				break;
			}
		}
	}
}

int main()
{
	int a[7] = { 11, 42, 58, 22, 33, 44, 55 };
	INSERT_SORT(a, 7);
	int i;
	for (i = 0; i < 7; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

