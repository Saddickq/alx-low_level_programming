#include "search_algos.h"
/**
 * linear_search - search for a item first occurace in an arrary
 * @array: pointer to the array to search
 * @size: the size of the arrray
 * @value: the value to search for in the array
 * Return: the index of the value in the array when found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
