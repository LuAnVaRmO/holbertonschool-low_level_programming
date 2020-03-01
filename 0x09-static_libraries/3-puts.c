#include "holberton.h"
/**
 * _puts - show string with puts
 * @str: character
 * Description: Show string
 * Return: string
 */
void _puts(char *str)
{
	int i;
	char s;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		s = str[i];
		_putchar(s);
	}
	_putchar('\n');
}
