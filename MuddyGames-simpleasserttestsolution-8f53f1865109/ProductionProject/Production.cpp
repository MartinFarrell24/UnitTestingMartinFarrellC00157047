#include "Production.h"

int Production::someMethod(int a)
{
	return a - a;
}

int Production::biggerOrSmaller(int size, int numArray[], int value)
{
	for (int i = 0; i < size; i++)
	{
		if (numArray[i] < 1 || numArray[i] > value)
		{
			numArray[i];
		}
	}
	return -1;
}

bool Production::checkForRepeatingNum(int size, int numArray[])
{
	for (int o = 0; o < size; o++)
	{
		for (int i = 0; i < size; i++)
		{
			if (numArray[o] == numArray[i] && i !=o)
			{
				return true;
			}
		}
	}
	return false;
}
