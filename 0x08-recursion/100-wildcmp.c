#include "holberton.h"
/**
 * wildcmp - checks two strings
 * @s1: string
 * @s2: string with *
 * Return: 1 if match, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 && *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (!*s1 && !*s2)
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		if (!*(s1 + 1) && !*s2)
		{
			return (0);
		}
	}
	return (0);
}
