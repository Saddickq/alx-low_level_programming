#include "main.h"

/**
 * prime - determine whether number is prime
 * @x:number
 * @y: number
 * Return:prime number
 */
int prime(int x, int y)
{
	if (x < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
		return (prime(x + 1, y));
}

/**
 * is_prime_number - conclude if number is prime
 * @n:number to check
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime(2, n));
}
