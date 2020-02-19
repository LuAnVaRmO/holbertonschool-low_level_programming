#include "holberton.h"
/**
 * rev_string - show string on rev
 * @s: character
 * Description: Show string
 * Return: string
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	i--;
	for (j = 0 ; j < i ; j++, i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
