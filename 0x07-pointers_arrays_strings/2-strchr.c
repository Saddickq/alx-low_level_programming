#include "main.h"

/**
 * _strchr - a function that locates a charcater in a string
 * @s: the string to be checked
 * @c: the variable to determine if present
 * Return: pointer if c is found or NULL if not found
 */

char *_strchr(char *s, char c);
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	return (0);
}
