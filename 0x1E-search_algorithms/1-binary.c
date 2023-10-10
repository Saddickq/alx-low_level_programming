#include "search_algos.h"
/**
 * binary_search - using binary search to find an element in an array
 * @array: the array to search
 * @size: size of the array
 * @value: the value to find
 * Return: the index of the number when found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int start = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		print_array(array, start, end);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
	}
	return (-1);
}

/**
 * print_array - print the array to search
 * @array: sub-array to search
 * @start: where to start
 * @end: where to stop
 * Return: void
 */
void print_array(int *array, int start, int end)
{
	int i;

	if (array == NULL)
		return;
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
