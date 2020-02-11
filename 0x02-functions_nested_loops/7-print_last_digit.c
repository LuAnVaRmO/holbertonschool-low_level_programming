#include "holberton.h"

/**
 * print_last_digit - Entry point
 * @n: interger number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (n % 10) * -1;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
}
