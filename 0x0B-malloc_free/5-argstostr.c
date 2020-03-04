#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - convert the arguments on strings
* @ac: int input
* @av: pointer array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	s = malloc(sizeof(char) * l + 1);
	k = 0;
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}
