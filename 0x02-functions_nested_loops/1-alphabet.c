#include "holberton.h"
/**
 * main - Entry point
 * Description: print_alphabet function prints all alphabet lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
