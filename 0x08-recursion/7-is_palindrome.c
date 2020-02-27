#include "holberton.h"
/**
 * palLen - Function that go at the end of a string
 * @str: string
 * @s: start of the way
 * @e: end of string
 * Return: integer number
 */
int palLen(char str[], int s, int e)
{
	if (s == e)
	{
		return (1);
	}
	if (str[s] != str[e])
	{
		return (0);
	}
	if (s < e + 1)
	{
		return (palLen(str, s + 1, e - 1));
	}
	return (1);
}
/**
 * is_palindrome - Function that return if a string is palindrome
 * @s: String to analize
 * Return: integer number
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
	{
		return (0);
	}
	return (palLen(s, 0, n - 1));
}
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
