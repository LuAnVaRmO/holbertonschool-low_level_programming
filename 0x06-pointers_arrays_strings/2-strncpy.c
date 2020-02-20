#include "holberton.h"
/**
 * _strncpy - copy str and null byte from src to dest
 * @dest: copy of the string
 * @src: string to copy
 * @n: integer number
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
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
