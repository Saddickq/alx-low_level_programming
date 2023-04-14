#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - determines if input is an uppercase letter
 * @c: The character to check
 * Return: character
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
