#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable struct dog
 * @d: pointer to struct dog
 * @name: name to start
 * @age: age to start
 * @owner: owner to start
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
