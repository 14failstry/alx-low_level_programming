#include <stdlib.h>
#include "dog.h"

/**
 *init_dog- a function that initializes the a variable of type struct dog
 *@owner: owner to initiaize
 *@name: name to be initialized
 *@age: age to be initialized
 *@d: pointer to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->name = name;
	d->owner = owner;
}

