#include "main.h"

/**
 * _strcmp - string to compare
 * @s1: string 1
 * @s2: string 2
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] - s2[a] == 0 && s1[a] != '\0')
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
