#include <unistd.h>
/**
 * _putchar - puts a single character
 * @c: character to put
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
