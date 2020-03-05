#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory space and set to 0
 * @nmemb: numbero of elements
 * @size: size of bytes
 * Description: allocate memory
 * Return: space allocated of memory set to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		s[i] = 0;
	}
	return (s);
}
