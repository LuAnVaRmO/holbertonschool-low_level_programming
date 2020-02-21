#include "holberton.h"

/**
 * cap_string - capitalizes all word .
 * @a: pointer of the array
 * Return: char
 */
char *cap_string(char *a)
{
	int i, c;
	int cap;
	char cases[] = ",;.!?(){}\n\t\" ";

	for (i = 0, cap = 0; a[i] != '\0'; i++)
	{
		if (a[0] > 96 && a[0] < 123)
			cap = 1;
		for (c = 0; cases[c] != '\0'; c++)
		{
			if (cases[c] == a[i])
				cap = 1;
		}
		if (cap)
		{
			if (a[i] > 96 && a[i] < 123)
			{
				a[i] -= 32;
				cap = 0;
			}
			else if (a[i] > 64 && a[i] < 91)
				cap = 0;
			else if (a[i] > 47 && a[i] < 58)
				cap = 0;
		}
	}
	return (a);
}
