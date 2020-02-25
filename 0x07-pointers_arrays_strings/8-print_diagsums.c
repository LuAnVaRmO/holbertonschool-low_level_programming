#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagnoal sums
 * @a: array of int
 * @size: size of the array
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
        int i, sum, sumRev;

	sum = 0;
	sumRev = 0;
        for (i = 0; i < (size * size);)
        {
                sum += a[i];
                i = i + size + 1;
        }
        for (i = size - 1; i < (size * size - 1);)
        {
                sumRev += a[i];
                i = i + size - 1;
        }
        printf("%d, %d\n", sum, sumRev);
}
