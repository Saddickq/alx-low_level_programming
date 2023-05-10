#include "main.h"
#include <stdio.h>

#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUFFER_SIZE 1024

/**
 * close_fd - function to determine if a fd cannot close
 * @file_des: the file descriptor to check
 * Return: void
 */

void close_fd(int file_des)
{
	int outcome = close(file_des);

	if (outcome < 0)
	{
		dprint(STDERR_FILENO, "Error: Can't close %s\n", file_des);
                exit(100);
	}
}		

/**
 * main - a program the copies file_from to file_to
 * @argc: argument count
 * @argv: aargument vector
 * Return: 1 on success
 */
int main(int argc, char **argv[])
{
	ssize_t *buffer;
	int file_to, file_from;
	ssize_t nread, nwrite;

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, PERMS);
	if (file_to == NULL)
	{
		dprint(STDERR_FILENO, "Error: Can't write to %S\n" argv[2]);
		close(file_from);
		exit(99);
	}
	nread = read(file_from, buffer, BUFFER_SIZE);
	if (nread < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
                exit(98);
	}
	nwrite = write(file_to, buffer, nread);
	if ((nwrite != nread) || nwrite < 0)
	{
		dprint(STDERR_FILENO, "Error: Can't write to %S\n" argv[2]);
                close(file_from);
		close(file_to);
                exit(99);
	}
	close(file_from);
	close(file_to);
	return (0);
}
