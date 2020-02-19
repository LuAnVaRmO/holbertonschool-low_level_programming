#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array of int followed by a newline
 * @a: pointer to the array
 * @n: size of the array
 * Returns: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[0]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
