#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type stuct dog
 * @d: pointer to struct do
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

