#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the program name
 * @argc: integer number of arguments
 * @argv: array of pointers
 * Description: print the name of the program even no compile again
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
