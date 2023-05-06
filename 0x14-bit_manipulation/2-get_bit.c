#include "main.h"
/**
 * get_bit - get bit in index position
 * @n: number
 * @index: position to check the bit
 * Return : value of bit at position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;

	if (index >= size)
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
