#include "holberton.h"

/**
 * main - Entry point
 * description: prints alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
