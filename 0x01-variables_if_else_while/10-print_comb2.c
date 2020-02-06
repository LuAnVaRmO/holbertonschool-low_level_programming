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
	int sp;

	for (ch = 0; ch <= 9; ch++)
	{
		for (sp = 0; sp <= 9; sp++)
		{
			putchar('0' + ch);
			putchar('0' + sp);
			if (ch != 9 || sp != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
