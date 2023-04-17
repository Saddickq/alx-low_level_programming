#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - add two strings together
 * @s1: string to be added to
 * @s2: string to be added
 * @n: nth byte
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		len1++;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	str = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	while (i < (len1 + n))
	{
		str[i] = s2[i - len1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
