#include "holberton.h"
/**
 * _memset - Function same to memset.
 * @s: Array of chars
 * @b: char to modify
 * @n: size of bits to change
 * Return: pointer to charcater s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
