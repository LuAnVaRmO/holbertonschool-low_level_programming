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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
