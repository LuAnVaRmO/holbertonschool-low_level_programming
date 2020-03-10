#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - free the memory
  * @d: the dog to free
  * Description: free the memory
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
