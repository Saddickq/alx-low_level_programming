#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 *
 *@c: the variable to be checked
 *
 * Return: Always 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
