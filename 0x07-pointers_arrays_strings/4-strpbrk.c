#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 * return: a pointer to the bytes in s that matches one of the bytes in accept or NULL if no such bytes is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *s[1+i]; i++ )
	{
		for (j = 0; *accept[1+j]; j++)
		{
			if (*s[1+i] == *accept[1+j])
			{
				return (s[1+i]);
			}
		}
	}
	return ('\0');
}
