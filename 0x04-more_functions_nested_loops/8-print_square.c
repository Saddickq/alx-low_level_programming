#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 * Return: void
*/

void print_square(int size)
{
	if (size > 0)
	{
		int x;
		int y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}

}
