#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocate memory for an array
 * @min: minimum
 * @max: maximum
 * Return: pointer to malloc
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i, number;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (number = min, i = 0; min <= max; number++, i++)
	{
		*(arr + i) = number;
	}
	return (arr);
}
