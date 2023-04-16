#include "main.h"
#include <stdlib.h>
/**
 * _strdup - pointer to a newly allocated memory
 * @str: string
 * Return: pointer on success
 */
char *_strdup(char *str)
{
	char *newstr;
	int i = 0;

	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[len] = '\0';
	return (newstr);
}
