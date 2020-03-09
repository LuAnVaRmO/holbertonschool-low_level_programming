#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints the number of arguments or flags
 * @argc: integer number of arguments
 * @argv: array of pointers
 * Description: print the number of argumens from the function
 * Return: 0 success
 */

char main(int argc, char *argv[])
{
	int i, j, n1, n2;
	char num1, num2;

      	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	n1 = atoi(num1);
	n2 = atoi(num2);

	if (_isdigit(n1) == 1 && _isdigit(n2) == 1)
	{
		continue;
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
        for (i = 0; n1 != '\0'; i++)
	{
		for (j = 0; n2 != '\0'; j++)
		{
		       
		}
	}
	return (0);
}
/**
 * _isdigit - Entry point
 * @c: Integer Number to evaluate if digit or not
 * Return: 1 if digit, 0 if otherway
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
