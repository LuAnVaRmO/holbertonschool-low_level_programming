#include "variadic_functions.h"
/**
 * print_all - print all values on any format
 * @format: format to print
 * Description: print all the arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *s;
	int i = 0, ignore = 0;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (*(format + i))
		{
			switch (*(format + i))
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				while (s == NULL)
				{
					s = "(nil)";
					break;
				}
				printf("%s", s);
				break;
			default:
				ignore = 1;
				break;
			}
			if (*(format + i + 1) != 0 && ignore == 0)
				printf(", ");

			i++;
			ignore = 0;
		}
	}
	va_end(ap);
	printf("\n");
}
