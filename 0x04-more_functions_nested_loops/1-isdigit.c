#include "main.h"

/**
 *_isdigit - checks for digit
 *@c: variable to be checked
 *Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
