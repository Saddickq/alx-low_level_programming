#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator : separator
 * @n : int
 * @... : variable arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *ptr;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}