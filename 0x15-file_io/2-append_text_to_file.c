#include "main.h"
#include <fcntl.h>


/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The file name.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t appended_byt;

	if (filename == NULL)
	return (-1);

	fd = open(filename,  O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	appended_byt = write(fd, text_content, strlen(text_content));
	if (appended_byt != -1)
	return (1);

	if (text_content == NULL)
	return (1);

	close(fd);

	return (appended_byt);
}
