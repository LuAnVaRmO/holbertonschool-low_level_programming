#include "holberton.h"
/**
 * _strpbrk - select the first ocurrence founded
 * @s: string to search
 * @accept: chars to compare
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
