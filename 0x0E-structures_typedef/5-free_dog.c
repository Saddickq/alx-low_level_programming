#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d);
	free(d->owner);
}
