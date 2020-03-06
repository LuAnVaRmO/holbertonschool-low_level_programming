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
	int i, *n;

	if (min > max)
		return (NULL);

	n = malloc(max);
	if (n == NULL)
		return (NULL);

	for (i = min ; i <= max; i++)
	{
		n[i] = i;
	}
	return (n);
}
