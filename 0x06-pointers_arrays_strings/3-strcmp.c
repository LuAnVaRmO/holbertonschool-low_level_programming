#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare too
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i=0;
	int j;
	while ((s1[i] != s2[i]) || (s1[i] != '\0'))
	{
		if ((j = s1[i] - s2[i]) != 0)
		{
			return (j);
		}
		i++;
	}
	return (0);
}
