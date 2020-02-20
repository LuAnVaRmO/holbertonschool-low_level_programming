#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare too
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s2 < *s1)
		{
			return (*s2);
		}
		else
		{
			return (0);
		}
	}
}
