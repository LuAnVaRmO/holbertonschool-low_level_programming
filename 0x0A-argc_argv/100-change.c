#include <stdio.h>
#include <stdlib.h>
/**
 * _get_change - tells you minimun cents to give back
 * @change: Argument count
 * Return: 0
 */
int change(int c)
{
	int coins = 0;

	if (c <= 0)
	{
		return (0);
	}
	while (c > 0)
	{
		if (c % 25 < c)
		{
			c -= 25;
			coins++;
		}
		else if (c % 10 < c)
		{
			c -= 10;
			coins++;
		}
		else if (c % 5 < c)
		{
			c -= 5;
			coins++;
		}
		else if (c % 2 < c)
		{
			c -= 2;
			coins++;
		}
		else if (c % 1 < c)
		{
			c -= 1;
			coins++;
		}
	}
	return (coins);
}
/**
 * main - tells you minimun cents to give back
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", change(atoi(argv[1])));
		return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
