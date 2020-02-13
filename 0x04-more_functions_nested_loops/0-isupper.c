#include "holberton.h"
/**
 * _isupper - Entry point
 * @c: Integer Number to evaluate if upper or lower
 * Return: 1 if upper, 0 if otherway
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
