#include "holberton.h"
/**
 * _pow_recursion - Function that prints a number power at other.
 * @x: Int number
 * @y: power to int X
 * Return: integer number, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
