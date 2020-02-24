#include "holberton.h"
/**
 * _memset - Function same to memset.
 * @s: Array of chars
 * @b: char to modify
 * @n: size of bits to change
 * Return: pointer to charcater s[]
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; s[i] >= s[n - 1]; i++)
	{
		s[i] = b;
	}
	return (s);
}
