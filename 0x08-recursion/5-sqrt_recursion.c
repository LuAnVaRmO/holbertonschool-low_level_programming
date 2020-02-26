#include "holberton.h"
/**
 * _sqrt_recursion - Function that return the sqrt of an Int..
 * @n: Int number
 * Return: integer number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_rec(1, n));
}
/**
 * sqrt_rec - verify number to number if same to n
 * @x: Int number
 * @y: int number same to n
 * Return: integer number
 */
int sqrt_rec(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (sqrt_rec(x + 1, y));
	}
}
