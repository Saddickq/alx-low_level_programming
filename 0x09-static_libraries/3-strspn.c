#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - check code
 * @s : string
 * @accept: string
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
