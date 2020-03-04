#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @str: array of character
 * Description: create a copy of the string
 * Return: char or null if fail
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0' ; size++)
	{
	}
	size++;

	s = malloc(size * sizeof(char));
	i = 0;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
