#include "holberton.h"
/**
 * print_diagona - Entry point
 * @n: Integer Number
 * Return: _ for each n
 */
void print_diagonal(int n)
{
    int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
					break;
				}
				else
					_putchar(' ');

			}
		}
        }
}
