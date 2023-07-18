#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a structur of type dog
 * @d: pointer to structure
 * @name: pointer to name of the dog
 * @age: age of dog
 * @owner: pointer to owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

