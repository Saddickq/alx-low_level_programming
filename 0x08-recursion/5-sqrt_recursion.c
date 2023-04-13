#include "main.h"
/**
 * root - determines the perfect root
 * @x: number
 * @y: number
 * Return: int
 */
int root(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (root(x + 1, y));
}
/**
 * _sqrt_recursion - find square root
 * @n: number square root to find
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (root(1, n));
}
