#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: Integer Number
 * Return: _ for each n
 */
void print_diagonal(int n)
{
	int i, j, k;
	
	j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('\\');
			_putchar('\n');
			j++;
			for (k = 0 ; k < j; k++)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
