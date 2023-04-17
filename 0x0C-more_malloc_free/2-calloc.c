#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory
 * @nmemb: memory bytes
 * @size : mem size
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		array[i] = 0;
		i++;
	}
	return (array);
}


