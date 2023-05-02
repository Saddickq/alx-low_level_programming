#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @valist: A va_list of arguments
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_integer - Prints an integer
 * @valist: A va_list of arguments
 */
void print_integer(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - Prints a float
 * @valist: A va_list of arguments
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - Prints a string
 * @valist: A va_list of arguments
 */
void print_string(va_list valist)
{
	char *str = va_arg(valist, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j;

	char *separator = "";

	format_t format_list[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(valist, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (format_list[j].type != '\0')
		{
			if (format_list[j].type == format[i])
			{
				printf("%s", separator);
				format_list[j].func(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
