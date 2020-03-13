#include "variadic_functions.h"
/**
 * sum_them_all - Add all the arguments
 * @n: number of arguments
 * Description: add allt the numbers passed by arguments
 * Return: integer number
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, m;

	m = n;
	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; m; m--)
		i += va_arg(ap, int);
	va_end(ap);
	return (i);
}
