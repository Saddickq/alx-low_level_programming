#include "main.h"
/**
 * get_endianness - get endiannes of machine
 * Return: 1 if little and 0 if big endian
 */

int get_endianness(void)
{
    unsigned int i = 1;

    char *ptr = (char *)&i;

    if (*ptr)
    {
        return 1;
    }
    else
        return 0;
}
