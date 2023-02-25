#include <stdio.h>
#include "main.h"

/**
 * 
*/

int main(void)
{
    int number;

    for (number = 1; number <= 100; number++)
    {
        if (number % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (number % 5 == 0)
        {
            printf("Buzz ");
        }
        else if (number % 15 == 0)
        {
            printf("FizzBuzz ");
        }
        else 
        {
            printf("%d ", number);
        }
    }
}
    
   