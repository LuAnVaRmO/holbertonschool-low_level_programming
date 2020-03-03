#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: unsigned integer number
 * @c: character
 * Description: create an array of chars
 * Return: char or null if fail or size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(c));
	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
