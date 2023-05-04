#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n : number to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int flag = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	int bits = sizeof(unsigned long int) * 8;

	while (bits > 0)
	{
		n <<= 1;
		bits--;
		if ((n & 1) == 1)
			flag = 1;
		if (flag)
			if ((n & 1) == 1)
				_putchar(49);
			else
				_putchar(48);
	}
}
