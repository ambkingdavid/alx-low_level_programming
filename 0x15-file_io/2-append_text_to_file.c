#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file..
 * @filename: name of the file to create.
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success,-1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, w;

	n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
		n = strlen(text_content);

	w = write(fd, text_content, n);

	if (w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
