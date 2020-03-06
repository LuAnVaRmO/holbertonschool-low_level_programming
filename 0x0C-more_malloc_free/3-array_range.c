#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create an array
 * @min: min value of array
 * @max: max value of array
 * Description: create an array of integers
 * Return: integer number
 */
int *array_range(int min, int max)
{
	int i, size, *n;

	if (min > max)
		return (NULL);

	size = (max - min + 1);
	n = malloc(size * sizeof(int));

	if (n == NULL)
		return (NULL);

	for (i = 0 ; i < (size); i++)
	{
		n[i] = min;
		min++;
	}
	return (n);
}
