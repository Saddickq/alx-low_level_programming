#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The argument count
 * @av: An array of strings containing the arguments
 * Return: A pointer to the new string, or NULL if it fails
 */
char *argstostr(int argc, char **argv)
{
	char *result;
	int c, i, j, ia;

	if (argc == 0)
		return (NULL);
	for (c = i = 0; i < argc; i++)
	{
		if (argv[i] == NULL)
			return (NULL);
		for (j = 0; argv[i][j] != '\0'; j++)
			c++;
		c++;
	}
	result = malloc((c + 1) * sizeof(char));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (argv[i][j] == '\0')
		{
			result[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			result[ia] = argv[i][j];
	}
	result[ia] = '\0';
	return (result);
}
