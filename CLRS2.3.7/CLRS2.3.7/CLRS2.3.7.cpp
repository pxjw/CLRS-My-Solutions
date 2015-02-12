// CLRS2.3.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
//插入排序
void insertSort(int a[], int length)
{
	int i = 0;
	int j, key;
	for (j = 1; j < length; j++)
	{
		key = a[j];
		i = j - 1;
		while (key > a[i])
		{
			int tmp;
			tmp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = tmp;
			i = i - 1;
			if (i < 0){ break; }
		}
	}
}
//穷举法
bool is_exit(vector<int> &S,int x)
{
	if (S.empty())
		return false;
	for (vector<int>::iterator it_i = S.begin(); it_i != --S.end(); ++it_i)
		for (vector<int>::iterator it_j = it_i; it_j != S.end();)
		{
			++it_j;
			if (*it_i + *it_j == x){
				return true;
			}
			else
				return false;
		}
	return false;
}
//针对已排序
bool is_sum_exist_permuted(vector< int > &permS, int x) //已排序序列
{
	if (permS.empty())
		return false;
	vector< int >::iterator first = permS.begin();
	vector< int >::iterator last = --permS.end();
	while (first != last)
	{
		if (*first + *last < x)
			++first;
		else if (*first + *last > x)
			--last;
		else
			return true;
	}
	return false;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	cin >> x;

	int m[10] = { 3, 3, 32, 55, 24, 154, 854, 321, 421, 32 };
	insertSort(m, 10);
	vector<int> S(m, m + 10);
	bool value;
	
	value = is_sum_exist_permuted(S, x);
	cout << value<<endl;
	return 0;
}

