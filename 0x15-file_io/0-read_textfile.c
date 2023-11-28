#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - function that reads a text file
 *                 and prints it to the POSIX standard output.
 * @filename: The file to read.
 * @letters: Letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         Returns 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	return (0);

	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	close(fd);
	free(buffer);
	return (wr);
}
