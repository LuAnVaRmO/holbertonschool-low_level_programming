#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - change the memory alocated
 * @ptr: pointer to the memory allocated
 * @old_size: size on bits
 * @new_size: new size of bits
 * Description: change the size of the memory
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void  *newptr;

	if (ptr == NULL)
	{
		newptr = (malloc(new_size));
		return (newptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	_memcpy(newptr, ptr, old_size);
	free(ptr);
	return (newptr);
}
/**
 * _memcpy - copy str the number of bytes from src to dest
 * @dest: copy of the string
 * @src: string to copy
 * @n: integer number
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
