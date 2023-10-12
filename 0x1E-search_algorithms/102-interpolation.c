#include "search_algos.h"
/**
 * interpolation_search - using interpolation to find an element
 * @array: the array to find
 * @size: the size of the array
 * @value: the key to find
 * Return: the index of the key when found
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0, high = size - 1, probe;

	if (array == NULL)
		return (-1);

	while (array[low] <= value && array[high] >= value && low <= high)
	{
		probe = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", probe, array[probe]);
		if (value == array[probe])
			return (probe);
		else if (value < array[probe])
			high = probe - 1;
		else
			low = probe + 1;
	}
	printf("Value checked array[%d] is out of range\n", probe);
	return (-1);
}
