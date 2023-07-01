#include "main.h"

/**
 * clear_bit - set a bit to 0
 * @n : pointer to number
 * @index: position to clear
 * Return: on success 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	unsigned int size = sizeof(unsigned long int) * 8;

	if (index >= size)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
