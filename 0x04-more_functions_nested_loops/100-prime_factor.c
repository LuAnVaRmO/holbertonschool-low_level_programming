#include <stdio.h>

/**
 * main - find and print the largest prime factor
 *
 * Return: 0.
 */
int main(void)
{
	long n = 612852475143;
	long d = 2;
	long p = 0;

	while (n != 1)
	{
		if (n % d == 0)
		{
			n = n / d;
			p = d;
		}
		d += 1;
	}
	printf("%ld\n", p);
	return (0);
}
