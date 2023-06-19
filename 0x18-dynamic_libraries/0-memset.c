#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - sets a block of memory
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
