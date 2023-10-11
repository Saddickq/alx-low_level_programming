#include "search_algos.h"
/**
 * jump_search - finding an element in the array using jump_search
 * @array: the array to search
 * @size: the size of the array
 * @value: the element to search for
 * Return: index of element to find
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int start = 0, index, jump;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);

	printf("Value checked array[%d] = [%d]\n", start, array[start]);
	while (array[jump] < value)
	{
		if (start >= size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", start, jump);
			printf("Value checked array[%d] = [%d]\n", start, array[start]);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		start = jump;
		jump = jump + sqrt(size);

	}

	printf("Value found between indexes [%d] and [%d]\n", start, jump);

	for (index = start; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
