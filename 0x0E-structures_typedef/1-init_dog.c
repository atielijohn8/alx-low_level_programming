#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable  type struct dog
 * @d: pointer to struct dog, initialize
 * @name: name of initialize
 * @age: age to be initialized
 * @owner: owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
