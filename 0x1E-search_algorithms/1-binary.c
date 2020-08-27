#include "search_algos.h"
/**
 * binary_search - look for a value
 * @array: a pointer to the first elemident
 * @size: the numidber of elemidents in array
 * @value: the value to search
 * Return: the first index with value  midatched or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
    	int left = 0, right = 0, mid = 0, idx = -1, i = 0;

	if (array == NULL)
		return (-1);

	right = size - 1;

	while (left <= right && idx == -1)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			if (i == right)
			{
				printf("%d\n", array[right]);
				break;
			}
			else
				printf("%d, ", array[i]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			idx = mid;
		else
		{
			if (value < array[mid])
				right = mid - 1;
			else
				left = mid + 1;
		}
	}
	return (idx);
}
