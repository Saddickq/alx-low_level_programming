#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - finds a string in a string
 * @haystack: where to look
 * @needle: what to look for
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
