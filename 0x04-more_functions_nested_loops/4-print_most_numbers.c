#include "holberton.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: a * b value
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		while (n != 2 && n != 4)
		{
			_putchar('0' + n);
			break;
		}
	}
	_putchar('\n');
}
