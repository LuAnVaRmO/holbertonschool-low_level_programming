#include "holberton.h"

/**
 * main - Entry point
 * description: prints alphabet 10 times
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
