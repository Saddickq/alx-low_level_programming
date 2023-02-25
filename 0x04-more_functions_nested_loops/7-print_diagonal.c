#include "main.h"
/**
 * 
*/

void print_diagonal(int n)
{
    if (n > 0)
    {
        int x;
        int y;

        for (x = 0; x < n; x++)
        {
            for (y = 0; y < x; y++)
            {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}