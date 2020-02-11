#include "holberton.h"
/**
 * times_table - Entry point
 * description: display times_table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int n1, n2, p, u, d;

	for (n1 = 0 ; n1 <= 9 ; n1++)
	{
		for (n2 = 0 ; n2 <= 9 ; n2++)
		{
			p = (n1 * n2);
			u = (p / 10);
			d = (p % 10);

			if (n2 != 0 && p < 10)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p < 10)
			{
				_putchar(p + '0');
			}
			else
			{
				_putchar('0' + u);
				_putchar('0' + d);
			}
			if (n2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
