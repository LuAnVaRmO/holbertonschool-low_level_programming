#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new dog
 * @name: the name of puppy
 * @age: age of the puppy
 * @owner: of the dog
 * Return: new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lname, lowner, i, j;
	dog_t *newdog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	lname = _strlen(name);
	lowner = _strlen(owner);

	newdog->name = malloc(sizeof(char) * lname + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * lowner + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
	{
		newdog->name[i] = name[i];
	}
	newdog->name[i] = '\0';
	for (j = 0; j < lowner; j++)
	{
		newdog->owner[j] = owner[j];
	}
	newdog->owner[j] = '\0';
	newdog->age = age;
	return (newdog);
}
/**
 * _strlen - show length of string
 * @s: character
 * Description: Show lenght of string
 * Return: value of lenght
 */
int _strlen(char *s)
{
	int i;
	int len;

	for (i = 0 ; s[len] != '\0' ; ++i)
	{
		len = i;
	}
	return (len);
}
