#include <stdio.h>

/**
 * main - If else statement
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lw;
	char up;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		putchar(lw);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');

	return (0);
}
