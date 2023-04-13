#include "main.h"

/**
 * prime - determine whether number is prime
 * @x:number
 * @y: number
 * Return:prime number
 */
int prime(int x, int y)
{
	if (x <= 1)
	{
		return (0);
	}
	if (x == 2 || x == 3)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	if (y * y > x)
	{
		return (1);
	}
	return (prime(x, y + 1));
}

/**
 * is_prime_number - conclude if number is prime
 * @n:number to check
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
