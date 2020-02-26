#include "holberton.h"

/**
 * _print_rev_recursion - Its a function like puts, in reverse.
 * @s: Char to print with _putchar in reverse.
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
