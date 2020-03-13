#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print all the strings or (nil) if NULL
 * @separator: string to print between numbers
 * @n: number of arguments
 * Description: print all the numbers passed by arguments, separated
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, m;
	char *s;

	m = n;
	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < m; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ap);
}
