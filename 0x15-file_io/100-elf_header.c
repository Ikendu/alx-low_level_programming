#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ch_elf(unsigned char *e_ident);
void show_magic(unsigned char *e_ident);
void show_class(unsigned char *e_ident);
void show_data(unsigned char *e_ident);
void show_version(unsigned char *e_ident);
void show_abi(unsigned char *e_ident);
void show_osabi(unsigned char *e_ident);
void show_type(unsigned int e_type, unsigned char *e_ident);
void show_entry(unsigned long int e_entry, unsigned char *e_ident);
void end_elf(int elf);

/**
 * ch_elf - Checks that a file is an ELF file.
 * @e_ident: A pointer to an array with ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit with code 98.
 */
void ch_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * show_magic - outputs the magic number of ELF header.
 * @e_ident: A pointer to an array with ELF magic numbers.
 *
 * Description: spaces sepretions itendifies magic numbers.
 */
void show_magic(unsigned char *e_ident)
{
	int ix;

	printf("  Magic:   ");

	for (ix = 0; ix < EI_NIDENT; ix++)
	{
		printf("%02x", e_ident[ix]);

		if (ix == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to array containing ELF class.
 */
void show_class(unsigned char *e_ident)
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
 * show_data - Print out the data of ELF header.
 * @e_ident: A pointer to array containing ELF class.
 */
void show_data(unsigned char *e_ident)
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
 * show_version - shows the version of ELF header.
 * @e_ident: A pointer to array containing ELF version.
 */
void show_version(unsigned char *e_ident)
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

/**
 * show_osabi - shows OS/ABI of ELF header.
 * @e_ident: A pointer to array containing ELF version.
 */
void show_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * show_abi - shows the ABI version of ELF header.
 * @e_ident: A pointer to array containing ELF ABI version.
 */
void show_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * show_type - shows the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to array containing ELF class.
 */
void show_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * show_entry - shows the entry point of ELF header.
 * @e_entry: The address of ELF entry point.
 * @e_ident: A pointer to array containing ELF class.
 */
void show_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  The entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * end_elf - Closes ELF file.
 * @elf: The file descriptor of ELF file.
 *
 * Description: If the file cannot be closed exit with code 98.
 */
void end_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays ELF file header information.
 * @argc: Number of arguments provided.
 * @argv: Argument vector pointers.
 *
 * Return: 0 on success.
 *
 * Description: Exit with code 98 If function fails.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		end_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		end_elf(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	ch_elf(header->e_ident);
	printf("ELF Header:\n");
	show_magic(header->e_ident);
	show_class(header->e_ident);
	show_data(header->e_ident);
	show_version(header->e_ident);
	show_osabi(header->e_ident);
	show_abi(header->e_ident);
	show_type(header->e_type, header->e_ident);
	show_entry(header->e_entry, header->e_ident);

	free(header);
	end_elf(op);
	return (0);
}
