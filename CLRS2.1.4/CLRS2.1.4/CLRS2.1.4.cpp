// CLRS2.1.4.cpp : 定义控制台应用程序的入口点。
//
/*
CLRS 2.1.4 
*/
#include "stdafx.h"
#include<iostream>
using namespace std;
void convert(int a[], int n)
{
	int i;
	int temp;
	for (i = 0; i<n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
int *sum(int a[], int lengtha, int b[], int lengthb)
{
	convert(a, lengtha);
	convert(b, lengthb);
	int lengthc = lengtha>lengthb ? lengtha : lengthb;
	lengthc += 1;
	int *c = new int[lengthc];
	memset(c, 0, lengthc);
	int i, key = 0;
	for (i = 0; i<lengthc; i++)
	{
		if (lengtha <= i)
		{
			if (lengthb>i)
			{
				c[i] = b[i] + key;
				if (c[i] >= 2)
				{
					c[i] %= 2;
					key = 1;
				}
				else
				{
					key = 0;
				}
			}
			else
			{
				c[i] = key;
			}
		}
		else if (lengtha>i)
		{
			if (lengthb>i)
			{
				c[i] = a[i] + b[i] + key;

			}
			else
			{
				c[i] = a[i] + key;

			}
			if (c[i] >= 2)
			{
				c[i] %= 2;
				key = 1;
			}
			else
			{
				key = 0;
			}
		}
	}
	return c;
}
int main()
{
	int a[10] = { 1, 0, 1, 0, 1, 1, 0, 0, 1, 1 };
	int    b[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 0 };
	int *c;
	int i, key;
	c = sum(a, 10, b, 9);

	for (i = 10; i >= 0; i--)
	{
		if (c[i] != 0)
		{
			key = i;
			break;
		}
	}
	for (i = key; i >= 0; i--)
	{
		cout << c[i] << " ";
	}
	return 0;
}