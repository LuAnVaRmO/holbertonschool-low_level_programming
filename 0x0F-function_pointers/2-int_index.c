#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - compare elements of array with *cmp
 * @array: Integer array
 * @size: number of elements of the array
 * @cmp: function pointer to use
 * Return: index of the same element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, temp;

	if (array)
	{
		if (size)
		{
			if (cmp)
			{
				for (i = 0; i < size ; i++)
				{
					temp = cmp(array[i]);

					if (temp != 0)
					{
						return (i);
					}
				}
			}
		}
	}
	return (-1);
}
