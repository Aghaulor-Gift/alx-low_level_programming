#include "main.h"
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message
 * and exits with the specified code.
 * @exit_code: The exit code.
 * @message: The error message format.
 * @file_name: The file name
 *
 * Return: void
 */
void print_error_and_exit(int exit_code, const char *message,
const char *file_name)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(exit_code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The path of the source file.
 * @file_to: The path of the destination file.
 */

void copy_file(const char *from_path, const char *to_path)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(from_path, O_RDONLY);
	if (fd_from == -1)
	{
	print_error_and_exit(98, "Error: Can't read from file %s\n", from_path);
	}

	fd_to = open(to_path, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
	close(fd_from);
	print_error_and_exit(99, "Error: Can't write to file %s\n", to_path);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
	close(fd_from);
	close(fd_to);
	print_error_and_exit(99, "Error: Can't write to file %s\n", to_path);
	}
	}

	if (bytes_read == -1)
	{
	close(fd_from);
	close(fd_to);
	print_error_and_exit(98, "Error: Can't read from file %s\n", from_path);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
	exit(100);
	}
}

/**
 * main - The main function of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	print_error_and_exit(97, "Usage: cp file_from file_to\n", argv[0]);

	copy_file(argv[1], argv[2]);

	return (0);
}
