#include <stdio.h>
#include <unistd.h>

/**
 * main - WriteCommand
 *
 * Return: 1 (Success)
 */
int main(void)
{
	int le;

	le = sizeof("and that piece of art is useful - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", le);
	return (1);
}
