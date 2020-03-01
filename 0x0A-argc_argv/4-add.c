#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>
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

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
