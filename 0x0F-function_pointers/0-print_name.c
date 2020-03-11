#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: the function pointer to use
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (*f)
	{
		void (*pr)(char *);

		pr = f;
		pr(name);
	}
}
