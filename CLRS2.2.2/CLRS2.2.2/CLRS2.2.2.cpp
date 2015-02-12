// CLRS2.2.2.cpp : 定义控制台应用程序的入口点。
//

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
int _tmain(int argc, _TCHAR* argv[])
{
	int a[8] = { 2, 3, 4, 38, 11, 44, 55, 22 };
	change(a, 8);
	return 0;
}

