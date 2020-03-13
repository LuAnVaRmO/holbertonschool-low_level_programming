#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_char- print char
 * @c: char
 */
void print_char(char c)
{
	printf("%c", c);
}
/**
 * print_integer - print int
 * @n: integer number
 */
void print_integer(int n)
{
	printf("%d", n);
}
/**
 * print_float - print float
 * @f: float number
 */
void print_float(float f)
{
	printf("%f", f);
}
/**
 * print_string - string
 * @s: string
 */
void print_string(char *s)
{
	while (s == NULL)
	{
		s = "(nil)";
		break;
	}
	printf("%s", s);
}
/**
 * print_all - print all values on any format
 * @format: format to print
 * Description: print all the arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, ignore = 0;
	va_list ap;

	va_start(ap, format);

	while (*(format + i))
	{
		switch (*(format + i))
		{
		case 'c':
			print_char(va_arg(ap, int));
			break;
       		case 'i':
			print_integer(va_arg(ap, int));
			break;
		case 'f':
			print_float(va_arg(ap, double));
			break;
		case 's':
			print_string(va_arg(ap, char *));
			break;
		default:
			ignore = 1;
			break;
		}
		if (*(format + i + 1) != 0 && ignore == 0)
		{
			printf(", ");
		}
		i++;
		ignore = 0;
	}
	putchar('\n');
	va_end(ap);
}
