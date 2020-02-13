#include "holberton.h"
/**
 * print_numbers - Entry point
 *
 * Return: a * b value
 */
void print_numbers(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
