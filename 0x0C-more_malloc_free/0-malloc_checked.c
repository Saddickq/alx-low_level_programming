#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b : unsigned int
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

