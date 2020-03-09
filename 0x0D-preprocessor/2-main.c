#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: return the name of the file
 * Return: 0
 */
#define name __FILE__

int  main(void)
{
	printf("%s\n", name);
	exit(0);
}
