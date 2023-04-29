#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 * Return: A pointer to the beginning of the located
 * substring or NULL, if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		while (*n && (*h == *n))
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
		h = haystack;
	}
	return (0);
}

