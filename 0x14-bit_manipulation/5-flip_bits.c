#include "main.h"

/**
 * flip_bits - number of bits to flip togo from n to m
 * @n: beginning or start point
 * @m: destination
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = m ^ n;

	unsigned int counter = 0;

	while (xor_result != 0)
	{
		if (xor_result & 1)
		{
			counter++;
		}
		xor_result >>= 1;
	}
	return (counter);
}
