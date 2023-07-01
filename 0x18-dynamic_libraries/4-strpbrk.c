#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - check code
 * @s: string
 * @accept: string
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
