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
	int num1, num2, i, j;

      	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (_isdigit(num1) == 1 && _isdigit(num2) == 1)
	{
		continue;
	}
	else
	{
		printf("Error\n");
		exit(98);
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
