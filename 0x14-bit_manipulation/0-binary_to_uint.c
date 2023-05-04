#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to binary code
 * Return: converted unsigned int on success
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		result = (result << 1) + (b[i] - 48);
		i++;
	}
	return (result);
}
