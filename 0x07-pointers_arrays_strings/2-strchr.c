#include "holberton.h"
/**
 * _strchr - copy str the number of bytes from src to dest
 * @s: string to search
 * @c: char to look for
 * Return: char s
 */
char *_strchr(char *s, char c)
{
	int j;
	
	for (j = 0 ; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
	}
	if (s[j] == c)
	{
		return (&s[j]);
	}
	return (0);
}
