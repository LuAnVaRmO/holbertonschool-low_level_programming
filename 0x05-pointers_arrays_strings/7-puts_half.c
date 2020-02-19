#include "holberton.h"
/**
 * puts_half - show string with puts
 * @str: character
 * Description: Show string
 * Return: string
 */
void puts_half(char *str)
{
	int i, j, n;
	
	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
	if (i % 2 != 0)
	{
		n = ((i - 1) / 2);
	}
	else
	{
		n = (i / 2);
	}
	j = i++;
	for (j = n ; str[j] != '\0' ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
