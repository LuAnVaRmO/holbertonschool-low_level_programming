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
	char c;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar('0' + ch);
	}
	for (c = 'a'; c <= 'f'; c++)
        {
                putchar(c);
        }
	putchar('\n');
	return (0);
}
