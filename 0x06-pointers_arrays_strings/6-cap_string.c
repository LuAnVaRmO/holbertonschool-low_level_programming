#include "holberton.h"

/**
 * cap_string - capitalizes all word .
 * @a: pointer of the array
 * Return: char
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if (a[i + 1] >= 97 && a[i + 1] <= 122)
		{
			if (a[i] == 32 || a[i] == '\t' || a[i] == '\n' || a[i] == 44)
			{
				a[i + 1] = a[i + 1] - 32;
			}
			if (a[i] == 59 || a[i] == 46 || a[i] == 33 || a[i] == 63 || a[i] == 123)
			{
				a[i + 1] = a[i + 1] - 32;
			}
			if (a[i] == 125 || a[i] == 34 || a[i] == 40 || a[i] == 41)
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
	}
	return (a);
}
