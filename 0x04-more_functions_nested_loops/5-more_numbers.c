#include "main.h"

/**
 *more_numbers - prints 0 to 14 10 times.
 *
 *Return: void
 */

void more_numbers(void)
{
	int lines;

	for (lines = 0; lines < 10; lines++)
	{
		int num;

		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
