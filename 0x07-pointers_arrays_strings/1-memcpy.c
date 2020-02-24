#include "holberton.h"
/**
 * _memcpy - copy str the number of bytes from src to dest
 * @dest: copy of the string
 * @src: string to copy
 * @n: integer number
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0, j = 0; j <= n && src[i] != '\0'; i++, j++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
