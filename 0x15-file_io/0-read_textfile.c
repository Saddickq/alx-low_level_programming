#include "main.h"
#include <stdio.h>
/**
 * read-textfile - a function that reads a text file
 * @file: the fileto read from
 * @letters: number of letter to read
 * Return: actual number of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread, nwrite;
	int fp;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
	{
		free(buffer);
		return (0);
	}
	nread = read(fp, buffer, letters);
	if (nread < 0)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	nwrite = write(STDOUT_FILENO, buffer, nread);
	if ((nread != nwrite) || nwrite < 0)
	{
		free(buffer);
		close(fp);
		return (0);
	}
}
