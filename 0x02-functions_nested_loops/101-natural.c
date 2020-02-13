#include <stdio.h>
/**
 * main -  computes and prints the sum of all
 * the multiples of 3 or 5 below 1024 (excluded)
 * Return: Always 0.
 */
int main(void)
{
	int i, ac;

	for (i = 0 ; i < 1024 ; i++)
	{
		ac = 0;

		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			ac = ac + i;
		}
	}
	printf("%d\n", ac);
	return (0);
}
