#include <stdio.h>

/**
 * main - outputs the alphabets in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char a;
	char d;

	a = 'a';
	d = 'A';
	while
		(a <= 'z')
		{
			putchar(a);
			a++;
		}
	while
		(d <= 'Z')
		{
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
