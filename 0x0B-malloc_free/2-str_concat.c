#include "main.h"
#include <stdlib.h>
/**
 * str_concat - add two strings together
 * @s1: string destination
 * @s2: strng to be added
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *con_str;
	int len1 = 0, len2 = 0;

	int x = 0, y = 0;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	con_str = (char *)malloc(sizeof(char) * (len1 + (len2 + 1)));
	if (con_str == NULL)
	{
		return (NULL);
	}
	while (x < len1)
	{
		con_str[x] = s1[x];
		x++;
	}
	while (y < len2)
	{
		con_str[x] = s2[y];
		y++;
		x++;
	}
	return (con_str);
}
