#include "main.h"

/**
 * set_bit - set bit at (index)
 * @n : pionter to number
 * @index: position to set bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;

	if (index >= size)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
