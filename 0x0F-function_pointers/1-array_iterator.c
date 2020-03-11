#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an array
 * @array: Integer array
 * @size: number of elements of the array
 * @action: function pointer to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
       	size_t i;
	int n;

	if(*action)
	{
		for (i = 0; i < size ; i++)
		{
			n = array[i];
			action(n);
		}
	}
}
