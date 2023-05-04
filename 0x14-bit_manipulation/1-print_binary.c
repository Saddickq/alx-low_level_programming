#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n : number to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int mask = 1;

	while ((mask << 1) <= n)
	{
		mask <<= 1;
	}
	while (mask > 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
