#include "main.h"

/**
 *print_most_numbers - print numbers between 0 and 9 without 2 and 4
 *
 *Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar(num + '0');
	}
	_putchar('\n');
}
