#include "main.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

/**
 * prt_osiAbi - print os/ABI str.
 * @nbr: ELF header heade->e_ident[7]
 */
void prt_osiAbi(int nbr)
{
	char *bf[] = {"UNIX - System V\n", "UNIX - HP-UX\n", "UNIX - NetBSD\n",
	"UNIX - Linux\n", "UNIX - Solaris\n", "UNIX - IRIX\n",
	"UNIX - FreeBSD\n", "UNIX - TRU64\n", "ARM\n", "Standalone App\n"};

	printf("%s", bf[nbr]);
}

/**
 * prt_tp - print type str.
 * @nbr: ELF header nbr.
 */
void prt_tp(int nbr)
{
	char *bf[] = {"NONE (Unknown type)\n", "REL (Relocatable file)\n",
	"EXEC (Executable file)\n", "DYN (Shared object file)\n",
	"CORE (Core file)\n"};

	printf("%s", bf[nbr]);
}
/**
 * print_Elf - print ELF files
 * @hd: ELF header.
 */
void print_Elf(Elf64_Ehdr *hd)
{
	int i;

	i = -1;
	printf("ELF Header:\n");
	printf("  Magic:   ");
	while (++i < EI_NIDENT)
		printf("%02x ", hd->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
			hd->e_ident[EI_CLASS] == 0 ? "none" :
			hd->e_ident[EI_CLASS] == 1 ? "ELF32" :
			"ELF64");
	printf("  Data:                              %s\n",
			hd->e_ident[EI_DATA] == 0 ? "none" :
			hd->e_ident[EI_DATA] == 1 ?
			"2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                           %u (current)\n",
			hd->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	prt_osiAbi(hd->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %u\n",
			hd->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	prt_tp(hd->e_type);
	printf("  Entry point address:               %#x\n", (unsigned int)
			hd->e_entry);
}

/**
 * main - check the code
 * @ac: arg nbr.
 * @av: arg str file.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr hd;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]);
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n",
				av[1]);
		return (98);
	}
	if (read(fd, &hd, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]);
		close(fd);
		return (98);
	}
	if (!(hd.e_ident[0] == 127 && hd.e_ident[1] == 'E' && hd.e_ident[2] ==
				'L' && hd.e_ident[3] == 'F'))
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ordinary file",
				av[1]);
		close(fd);
		return (98);
	}
	print_Elf(&hd);
	close(fd);
	return (0);
}
