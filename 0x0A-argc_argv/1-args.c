#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the number of arguments or flags
 * @argc: integer number of arguments
 * @argv: array of pointers
 * Description: print the number of argumens from the function
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	argv[argc] = argv[argc];
	printf("%d\n", (argc - 1));
	return (0);
}
