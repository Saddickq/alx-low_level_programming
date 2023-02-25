#include "main.h"

/**
 * 
*/

void print_triangle(int size)
{
    if (size > 0)
    {
        int x;
        int y;

        for (x = 0; x < size; x++)
        {
            _putchar(' ');
        }
    }
    else
    {
        _putchar('\n');
    }
}