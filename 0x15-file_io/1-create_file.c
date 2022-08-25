#include "main.h"

/**
 * create_file - function to create a new file
 * @filename: name of file to be created
 * @text_content: content of new file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		length = write(fd, text_content, str_len(test_content));
	close(fd);
	if (length == -1)
		return (-1);
	return (1);
}
