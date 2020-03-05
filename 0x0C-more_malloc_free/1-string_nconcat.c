#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concat 2 array of chars
 * @s1: array of characters
 * @s2: array to concat
 * @n: number of bytes to concat of s2
 * Description: concat 2 strings
 * Return: char or null if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, size, i;
	char *s;

	if (s1 == NULL)
		l1 = 0;
	else
	{
		for (l1 = 0 ; s1[l1] ; l1++)
			;
	}
	if (s2 == NULL)
		l2 = 0;
	else
	{
		for (l2 = 0 ;  s2[l2]; l2++)
			;
	}
	if (n >= l2)
		n = l2;

	size = l1 + n + 1;
	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[i + l1] = s2[i];
	}
	s[l1 + n] = '\0';
	return (s);
}
