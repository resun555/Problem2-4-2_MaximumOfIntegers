// Problem2-4-2_MaximumOfIntegers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	int a[100];
	for (size_t i = 0; i < 100; i++)
	{
		scanf("%d", &a[i]);
	}
	int maximum = a[0];
	for (size_t i = 0; i < 99; i++)
	{
		if (maximum < a[i + 1])
		{
			maximum = a[i + 1];
		}
	}
	printf("%d", maximum);
    return 0;
}

