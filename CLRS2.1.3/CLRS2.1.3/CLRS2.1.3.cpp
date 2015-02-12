// CLRS2.1.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int searchQuestion(int a[],int length,int v)
{
	int i, key=0;
	for (i = 0; i < length; i++)
	{
		if (v == a[i]){
			cout << v << endl;
			key++;
		}
	}
	return key;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int a[10] = { 3, 3, 4, 5, 6, 7, 2, 33, 55 };
	int v;
	
	while (cin >> v){
		int value = searchQuestion(a, 10, v);
		if (value == 0){
			cout << "NIT" << endl;
		}
	}
	return 0;
}

