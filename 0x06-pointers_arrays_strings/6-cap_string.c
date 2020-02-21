#include "holberton.h"

/**
 * cap_string - capitalizes all word .
 * @a: pointer of the array
 * Return: char
 */
char *cap_string(char *a)
{
	int i;

	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] = a[0] - 32;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i - 1] == ' ' || a[i - 1] == '\t' || a[i - 1] == '\n'))
		{
			a[i] = a[i] - 32;
		}
		else if ((a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.'))
		{
			a[i] = a[i] - 32;
		}
		else if ((a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"'))
		{
			a[i] = a[i] - 32;
		}
		else if ((a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{'))
		{
			a[i] = a[i] - 32;
		}
		else if ((a[i - 1] == '}') &&  (a[i] >= 'a' && a[i] <= 'z'))
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
