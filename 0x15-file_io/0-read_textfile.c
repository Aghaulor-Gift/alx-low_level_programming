#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
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
	FILE *fp;
	char *buffer;
	ssize_t rd;
	ssize_t wr;
	size_t total;

	if (filename == NULL)
	return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
	return (0);
	total = 0;

	buffer = (char *)malloc(1024);
	if (buffer == NULL)
	{
	fclose(fp);
	return (0);
	}
	rd = read(rd, buffer, sizeof(buffer));
	rd = fread(buffer, 1, 1024, fp);
	wr = write(STDOUT_FILENO, buffer, rd);

	while (rd > 0)
	{
	if (wr != rd)
	{
	close(rd);
	return (0);
	}

	total += rd;

	if (total >= letters)
	break;
	}

	free(buffer);
	close(rd);
	return (total);
}
