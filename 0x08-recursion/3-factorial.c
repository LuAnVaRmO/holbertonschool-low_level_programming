#include "holberton.h"

/**
 * factorial - Function that prints factorial of a number.
 * @n: Int number to get factorial
 * Return: integer number, 1 if 0 or -1 if n < 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
