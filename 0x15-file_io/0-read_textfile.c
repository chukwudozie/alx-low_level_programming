#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_length, write_length;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	read_length = read(fd, buf, letters);
	close(fd);
	if (read_length == -1)
	{
		free(buf);
		return (0);
	}
	write_length = write(STDOUT_FILENO, buf, read_length);
	free(buf);

	if (read_length != write_length)
		return (0);
	return (write_length);
}
