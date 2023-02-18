#include <stdio.h>

/**
 * main - outputs the alphabets in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvqxyz";
	int i;

	for (i = 0; i > 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
