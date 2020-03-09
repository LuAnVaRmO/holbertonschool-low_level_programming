#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize the struct dog
 * @d: the struct dog without initialize
 * @name: the name of puppy
 * @age: age of the puppy
 * @owner: of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
