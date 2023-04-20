#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog
 * @name : name
 * @age : age
 * @owner: owner
 * Return:pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	unsigned int i;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < strlen(name) + 1; i++)
	{
		n_dog->name[i] = name[i];
	}
	n_dog->name[i] = '\0';
	n_dog->age = age;
	for (i = 0; i < strlen(owner) + 1; i++)
	{
		n_dog->owner[i] = owner[i];
	}
	n_dog->owner[i] = '\0';
	return (n_dog);
}
