// CLRS2.1.4.cpp : 定义控制台应用程序的入口点。
//
/*
CLRS 2.1.4 
*/
/*
Add-Binary-Numbers(lhs, rhs)
1 def sum as an array with sum.length = lhs.lengh + 1
2 def carry = 0
3 for i = lhs.lengh - 1 to 0
4   sum[i + 1] = (carry + lhs[i] + rhs[i]) % 2
5   carry = (carry + lhs[i] + rhs[i]) / 2
6 sum[0] = carry
7 return sum
*/
#include "stdafx.h"
#include<iostream>
using namespace std;
//获取数组长度
int getArrlength(int *a)
{
	return (sizeof(a) / sizeof(a[0]));
}
//由于C++不允许定义非常量大小的数组，因此先定义好再传入
int * Add_Bin_Num(int lhs[],int rhs[],int sum[]){
	int carry = 0;
	//int lhslen = getArrlength(lhs);
	//cout << lhslen << endl;
	//此处9的值为lhs的长度10-1
	for (int i = 9; i >=0; i--){
		sum[i + 1] = (rhs[i] + lhs[i] + carry) % 2;
		carry = (lhs[i] + rhs[i] + carry) / 2;
		//cout << sum[i] << endl;
	}
	sum[0] = carry;
	return sum;
}
int main()
{
	int lhs[10] = { 1, 0, 1, 0, 1, 1, 0, 0, 1, 1 };
	int rhs[10] = { 1, 0, 1, 0, 1, 1, 0, 1, 1, 1 };
	int sum[11] = { 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int tmp;
	//for (int i = 0; i < 10; i++){
	//	cin >> tmp;
	//	lhs[i] = tmp;
	//}
	//for (int j = 0; j < 10; j++){
	//	cin >> tmp;
	//	lhs[j] = tmp;
	//}
	//while (cin >> tmp){
	//	lhs[i] = tmp;
	//	i++;
	//}
	//while (cin >> tmp){
	//	rhs[i] = tmp;
	//	i++;
	//}
	//cout << Add_Bin_Num(lhs, rhs, sum)[1];
	for (int x = 0; x < 11; x++){
		cout << Add_Bin_Num(lhs, rhs, sum)[x];
	}cout << endl;
	return 0;
}



//void convert(int a[], int n)
//{
//	int i;
//	int temp;
//	for (i = 0; i<n / 2; i++)
//	{
//		temp = a[i];
//		a[i] = a[n - i - 1];
//		a[n - i - 1] = temp;
//	}
//}
//int *sum(int a[], int lengtha, int b[], int lengthb)
//{
//	convert(a, lengtha);
//	convert(b, lengthb);
//	int lengthc = lengtha>lengthb ? lengtha : lengthb;
//	lengthc += 1;
//	int *c = new int[lengthc];
//	memset(c, 0, lengthc);
//	int i, key = 0;
//	for (i = 0; i<lengthc; i++)
//	{
//		if (lengtha <= i)
//		{
//			if (lengthb>i)
//			{
//				c[i] = b[i] + key;
//				if (c[i] >= 2)
//				{
//					c[i] %= 2;
//					key = 1;
//				}
//				else
//				{
//					key = 0;
//				}
//			}
//			else
//			{
//				c[i] = key;
//			}
//		}
//		else if (lengtha>i)
//		{
//			if (lengthb>i)
//			{
//				c[i] = a[i] + b[i] + key;
//
//			}
//			else
//			{
//				c[i] = a[i] + key;
//
//			}
//			if (c[i] >= 2)
//			{
//				c[i] %= 2;
//				key = 1;
//			}
//			else
//			{
//				key = 0;
//			}
//		}
//	}
//	return c;
//}
//int main()
//{
//	int a[10] = { 1, 0, 1, 0, 1, 1, 0, 0, 1, 1 };
//	int    b[10] = { 1, 0, 0, 0, 1, 0, 0, 0, 0 ,1};
//	int *c;
//	int i, key;
//	c = sum(a, 10, b, 9);
//
//	for (i = 10; i >= 0; i--)
//	{
//		if (c[i] != 0)
//		{
//			key = i;
//			break;
//		}
//	}
//	for (i = key; i >= 0; i--)
//	{
//		cout << c[i] << " ";
//	}
//	return 0;
//}