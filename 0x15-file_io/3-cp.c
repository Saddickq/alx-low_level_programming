#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_des);
		exit(100);
	}
}

/**
 * main - a program the copies file_from to file_to
 * @argc: argument count
 * @argv: aargument vector
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int file_to, file_from;
	ssize_t nread;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if ((file_from = open(argv[1], O_RDONLY)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, PERMS)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd(file_from);
		exit(99);
	}
	while ((nread = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd(file_from);
			close_fd(file_to);
			exit(99);
		}
	}
	if (nread < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		close_fd(file_from);
		close_fd(file_to);
		exit(98);
	}
	close_fd(file_from);
	close_fd(file_to);
	return (0);
}
