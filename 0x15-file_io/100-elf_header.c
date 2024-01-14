#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error_and_exit - Prints an error message to stderr
 *                        and exits with status code 98.
 * @error_message: The error message to be printed.
 */
void print_error_and_exit(const char *error_message)
{
	fprintf(stderr, "%s\n", error_message);
	exit(98);
}

/**
 * display_elf_header - Displays information from the ELF header.
 * @filename: The name of the ELF file.
 */
void display_elf_header(const char *filename)
{
	int i;
	int fd;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || read(fd, &header, sizeof(header)) != sizeof(header))
	{
	print_error_and_exit("Error: Unable to open or read ELF header");
	}

	close(fd);

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < EI_NIDENT; ++i)
	printf("%02x ", header.e_ident[i]);
	printf("\n  Class:%s\n", header.e_ident[EI_CLASS] ==
			ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:%s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:%d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:%s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "Other");
	printf("  ABI Version:%d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:%s\n", header.e_type == ET_EXEC ?
			"EXEC (Executable file)" : "Other");
	printf("  Entry point address:%lx\n", (unsigned long)header.e_entry);
}

/**
 * main - The main function of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	return (98);
	}

	display_elf_header(argv[1]);
	return (0);
}
