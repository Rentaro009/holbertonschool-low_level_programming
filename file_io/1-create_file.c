#include "main.h"

/**
 * create_file - creates a file and writes in it
 *
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, lh = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lh] != '\0')
			lh++;

		bytes_written = write(fd, text_content, lh);
		if (bytes_written == -1 || bytes_written != lh)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
