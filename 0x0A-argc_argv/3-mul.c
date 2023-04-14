#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers from command line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
