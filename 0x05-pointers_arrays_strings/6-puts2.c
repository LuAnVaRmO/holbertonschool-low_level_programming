#include "holberton.h"
/**
 * puts2 - show string with puts
 * @str: character
 * Description: Show string
 * Return: string
 */
void puts2(char *str)
{
	int i;
	char s;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		s = str[i];
		if ( i % 2 == 0)
		{
		_putchar(s);
		}
	}
	_putchar('\n');
}
