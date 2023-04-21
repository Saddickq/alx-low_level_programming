#include "function_pointers.h"
/**
 * array_iterator - iterate over an arry
 * @array: pointer
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

