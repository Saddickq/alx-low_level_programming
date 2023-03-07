#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers
 * @a: 2d array
 * @size: square of the matrix
 * return: nothing
 */
 
void print_diagsums(int *a, int size)
{
	int sqr = size * size;
	int x = 0;
	int y = 0;
	int i;

	for (i = 0; i < sqr; i += size + 1)
	{
		x += a[i];
	}
	for (i = size - 1; i < sqr - 1; i += size - 1)
	{
		y += a[i];
	}
	printf("%d, %d\n", x, y);
}
