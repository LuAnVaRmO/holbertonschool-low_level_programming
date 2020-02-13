#include "holberton.h"
/**
 * more_numbers - Entry point
 *
 * Return: 10 lines, 14 numbers print
 */
void more_numbers(void)
{
	int n, m;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 0 ; m <= 14 ; m++)
		{
			if (m > 9)
			{
				_putchar('0' + (m / 10));
			}
			_putchar('0' + (m % 10));
		}
		_putchar('\n');
	}
}
