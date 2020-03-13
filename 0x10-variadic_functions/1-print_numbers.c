#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print all the numbers
 * @separator: string to print between numbers
 * @n: number of arguments
 * Description: print all the numbers passed by arguments, separated
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, m;

	m = n;
	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < m; i++)
	{
		if (i == (m - 1))
		{
			printf("%d\n", va_arg(ap, int));
		}
		else
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	}
	va_end(ap);
}
