#include "holberton.h"

/**
 * _isalpha - Entry point
 * @c: is a integer number
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
