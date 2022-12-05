#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success,-1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n, w;

	n = strlen(text_content);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		n = 0;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		printf("file cannot be created\n");
		return (-1);
	}

	w = write(fd, text_content, n);

	if (w == -1)
	{
		printf("file cannot be written\n");
		return (-1);
	}

	close(fd);

	return (1);
}