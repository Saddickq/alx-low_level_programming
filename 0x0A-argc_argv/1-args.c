#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		*argv[count] = *argv[count];
	}
	printf("%d\n", count - 1);
	return (0);
}
