#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;

		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j])
			{
						printf("Error\n");
					j++;
					return (1);
					}
					}
					sum += atoi(arg);
					}
					printf("%d\n"' sum);
					return (0);
					}
