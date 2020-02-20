#include "holberton.h"
/**
 * _strncat - show string on rev
 * @src: character fixed
 * @dest: character
 * @n: integer number
 * Description: Show string concats
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0 ; dest[j] != '\0' ; ++j)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
