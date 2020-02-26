#include "holberton.h"

/**
 * _strlen_recursion - Its a function that return the length of a string.
 * @s: Char to count the lenght.
 * Return: integer number.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(++s) + 1);
	}
	return (0);
}
