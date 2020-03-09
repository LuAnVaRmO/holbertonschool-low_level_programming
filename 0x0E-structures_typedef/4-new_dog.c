#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize the struct dog
 * @name: the name of puppy
 * @age: age of the puppy
 * @owner: of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	dog_t *newdog;

	new_dog->name = n;
	new_dog->owner = o;
	newdog = init_dog(*newdog, *n, new_dog->age, *o);
	return (newdog);
}
/**
 * init_dog - Initialize the struct dog
 * @d: the struct dog without initialize
 * @name: the name of puppy
 * @age: age of the puppy
 * @owner: of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
