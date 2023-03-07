#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: pointer where the memory is copy to
 * @src: pointer from where the data is copied
 * @n: unsigned int, bytes of @src
 * return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
