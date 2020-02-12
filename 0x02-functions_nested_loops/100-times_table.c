#include "holberton.h"
/**
 * print_times_table - Entry point
 * @n: Integer number
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int n1, n2, p;

	p = (n1 * n2);
	if (n > 15 || n < 0)
	{
		return;
	}
	for (n1 = 0 ; n1 <= n ; n1++)
	{
		for (n2 = 0 ; n2 <= n ; n2++)
		{
			if (p < 100 && p >= 10)
			{
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if (p >= 100)
			{
				_putchar((p / 100) + '0');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
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
