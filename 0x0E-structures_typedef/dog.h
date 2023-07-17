#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describin a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
/**
 * dog_t - Typedef of struct do
 */
typedef struct dog dog_t;

void int_dog(struct dog *d, char *name , float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
