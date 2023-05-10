#include "main.h"
#include <stdio.h>

#define FILE_PERMS (S_IRUSR | S_IWUSR)

/**
 * create_file - create or write to a file if it exists
 * @filename: name of file to create
 * @text_content: a null terminated string to write to file
 * Return: 1 on success -1 in failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t len;
	ssize_t nwrite;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, FILE_PERMS);
	if (fp < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			;
		}
		nwrite = write(fp, text_content, len);
		if (nwrite != len)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
i}
