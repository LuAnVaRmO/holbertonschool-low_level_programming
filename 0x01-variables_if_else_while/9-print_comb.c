#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - If else statement
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar('0' + ch);
		if (ch < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
