#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialise dog
 * @d: pointer to struct
 * @name : pointer to name
 * @age : age
 * @owner : pointer to owners name
 * Return : nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
