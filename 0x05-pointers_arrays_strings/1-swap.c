#include "holberton.h"
/**
 * swap_int - Entry point
 * @a: integer number to swap
 * @b: integer number to swap
 * return 0 - Always success
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
