#include "main.h"
#include <elf.h>

/**
 * check_elf - checks if a file is an ELF file.
 * @e_ident: pointer to an array containing the ELF magic numbers.
 * Return: void.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	index = 0;
	while (index < 4)
	{
		if (e_ident[index] != 127 &&
			e_ident[index] != 'E' &&
			e_ident[index] != 'L' &&
			e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		index = index + 1;
	}
}

/**
 * print_magic - prints the magic numbers of an ELF header.
 * @e_ident: pointer to an array containing the ELF magic numbers.
 * Return: void.
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");
	index = 0;
	while (index < EI_NIDENT)
	{
		printf("%02x", e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		index = index + 1;
	}
}

/**
 * print_class - prints the class of an ELF header.
 * @e_ident: pointer to an array containing the ELF class.
 * Return: void.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data of an ELF header.
 * @e_ident: pointer to an array containing the ELF class.
 * Return: void.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - prints the version of an ELF header.
 * @e_ident: pointer to an array containing the ELF version.
 * Return: void.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
		e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
