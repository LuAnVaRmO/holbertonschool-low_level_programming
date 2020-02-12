#include "holberton.h"
/**
 * print_times_table - Entry point
 * @n: Integer number
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int n1, n2, p, u, d, c;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (n1 = 0 ; n1 <= n ; n1++)
	{
		for (n2 = 0 ; n2 <= n ; n2++)
		{
			p = (n1 * n2);
				if (p < 100 && p >= 10)
			{
				u = (p % 10);
				d = (p / 10);
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else if (p >= 100)
			{
				u = (p % 10);
				d = ((p / 10) % 10);
				c = (p / 100);
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else if (n2 != 0 && p < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(p + '0');
			}
			if (n2 != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

