#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print the struct dog
 * @d: the struct dog to print
 * @n: name
 * @o: owner
 * @a: age
 */
void print_dog(struct dog *d)
{
	char *n, *o;
	float  a;

	n = d->name;
	o = d->owner;
	a = d->age;

	if (d == NULL)
		return;
	if (n == NULL)
		n = "(nil)";
	if (o == NULL)
		o = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", n, a, o);
	}
}
