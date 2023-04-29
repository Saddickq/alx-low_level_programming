#include <unistd.h>
/**
 * _putchar - puts a character
 * @c: character to pust
 * Return :int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
