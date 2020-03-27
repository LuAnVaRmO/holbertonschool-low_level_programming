#include "holberton.h"
/**
 * bin_change - convert and print a binary
 * @n: unsigned long int
 * Return: binary or 0 if fail
 */
void bin_change(unsigned long int n)
{
	if (n == 0)
		return;
	bin_change(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - print a binary number
 * @n: integer number to convert and print
 * Description: convert a int to a binary
 * Return: Converted number or 0 if fail
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bin_change(n);
}
