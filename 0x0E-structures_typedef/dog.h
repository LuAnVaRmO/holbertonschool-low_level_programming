#ifndef DOG_H
#define DOG_H
/**
 * struct dog - It's a dog
 * @name: name of the puppy
 * @age: how many time since birth
 * @owner: who takes care it
 * Description: Describe 3 data of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
