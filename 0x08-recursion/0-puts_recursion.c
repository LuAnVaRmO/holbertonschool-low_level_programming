#include "holberton.h"

/**
 * _puts_recursion - Its a function like puts, but with recursion.
 * @s: Char to print with _putchar.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
