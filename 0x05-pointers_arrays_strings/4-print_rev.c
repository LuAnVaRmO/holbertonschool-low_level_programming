#include "holberton.h"
/**
 * print_rev - show string on rev
 * @s: character
 * Description: Show string
 * Return: string
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0 ; s[j] != '\0' ; i++, j++)
	{
	}
	while (i--)
	{
		_putchar(s[j - 1]);
		j--;
	}
	_putchar('\n');
}
