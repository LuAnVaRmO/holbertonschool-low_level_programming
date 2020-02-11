#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Entry point
 * @n: Integer Number
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	while (n <= 97)
	{
		printf("%d, ", n);
		n++;
	}
	while (n >= 99)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	putchar('\n');
}
