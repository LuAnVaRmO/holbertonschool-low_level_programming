#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - convert the arguments on strings
* @b: int input
* Return: void or 98 if error
*/
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
