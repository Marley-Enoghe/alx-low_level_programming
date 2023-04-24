#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

void check_elf(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - this checks if a file is an ELF file.
 * @e_ident: A pointer that points to an array containing the ELF magic numbers.
 *
 * Description: when the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int main;

	for (main = 0; main < 4; main++)
	{
		if (e_ident[main] != 127 &&
		    e_ident[main] != 'E' &&
		    e_ident[main] != 'L' &&
		    e_ident[main] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - This prints the magic numbers of an ELF header.
 * @e_ident: This is a pointer to an array containing the ELF magic numbers.
 *
 * Description: The magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int main;

	printf("  Magic:   ");

	for (main = 0; main < EI_NIDENT; main++)
	{
		printf("%02x", e_ident[main]);

		if (main == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_class - Use for printing the class of an ELF header.
 * @e_ident: This is a pointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELF_CLASS_NONE:
		printf("none\n");
		break;
	case ELF_CLASS_32:
		printf("ELF32\n");
		break;
	case ELF_CLASS_64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - the data of an ELF header.
 * @e_ident: This is a pointer to an array containing the ELF class.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELF_DATA_NONE:
		printf("none\n");
		break;
	case ELF_DATA_2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELF_DATA_2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

