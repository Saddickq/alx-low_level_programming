#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - add text_content to the end of a file
 * @filename: the file to append to
 * @text_content: the text to append
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t text_len;
	int fp;
	ssize_t nwrite;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len] != '\0'; text_len++)
		{
			;
		}
		nwrite = write(fp, text_content, text_len);
		if (nwrite != text_len || nwrite < 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
