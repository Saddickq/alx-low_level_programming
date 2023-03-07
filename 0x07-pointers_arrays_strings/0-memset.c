#include "main.h"

/**
 * *_memset - a function that fill a memory with a constant byte
 * @s: pointer that represent the block of memory to fill
 * @b: variable represent the character to fill
 * @n: unsigned int, the number of bytes to be filled
 * return: Always 0
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
