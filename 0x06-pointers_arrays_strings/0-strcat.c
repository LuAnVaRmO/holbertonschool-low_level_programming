#include "holberton.h"
/**
 * _strcat - show string on rev
 * @src: character fixed
 * @dest: character
 * Description: Show string concats
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	for (i = 0 ; dest[i] != '\0' ; ++i)
	{
	}
	len = i++;
	for (i = 0 ;  src[i] != '\0' ; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
