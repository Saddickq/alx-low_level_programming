#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - determine if a character is a lowercase letter
 * @c: parameter to determine
 * Return: int
 */

int _islower(int c)
{
	    return (c >= 'a' && c <= 'z');
}

