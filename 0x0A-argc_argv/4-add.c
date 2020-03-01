#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>
/**
 * isanumber - program to verify if number or not
 * @str: An array of size argc
 * Return: always successful
 */

int isanumber(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - prints the number of arguments or flags
 * @argc: integer number of arguments
 * @argv: array of pointers
 * Description: print the number of argumens from the function
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, add;

	add = 0;
	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isanumber(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", add);
	return (0);
}
