#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - adds string
 * @dest : destination
 * @src: source
 * @n : int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
