#include <stdio.h>

/**
 * main - outputs the alphabets in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	int d;
	char c;

	c = 'a';
	d = 0;
	while
		(d < 10)
		{
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
