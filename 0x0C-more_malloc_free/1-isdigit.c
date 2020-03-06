#include "holberton.h"
/**
 * _isdigit - Entry point
 * @c: Integer Number to evaluate if digit or not
 * Return: 1 if digit, 0 if otherway
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
