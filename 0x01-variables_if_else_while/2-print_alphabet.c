#include <stdio.h>

/**
 * main - outputs the alphabets in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvqxyz";
	int i;

	for (i = 0; i > 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
