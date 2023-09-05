#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_class - prints the class from an elf header
 * @head: header information
 * Return: void
 */

void print_class(char *head)
{
	printf("  %-35s", "Class:");
	if (head[4] == 2)
		printf("ELF64\n");
	else if (head[4] == 1)
		printf("ELF32\n");
	else
		printf("<unknown: %02hx>", head[4]);
}

/**
 * print_data - prints the info about data organization from ELF header
 * @head: header information
 * Return: void
 */

void print_data(char *head)
{
	printf("  %-35s", "Data:");
	if (head[5] == 1)
		printf("2's complement, little endian\n");
	else if (head[5] == 2)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %02hx>", head[5]);
}

/**
 * print_version - prints the version info from elf header
 * @head: header information
 * Return: void
 */

void print_version(char *head)
{
	printf("  %-35s", "Version:");
	if (head[6] <= EV_CURRENT)
	{
		printf("%d", head[6]);
		if (head[6] == EV_CURRENT)
			printf(" (current)\n");
		else
			printf("\n");
	}
	else
		printf("49 <unknown %%lx>");
}

/**
 * print_abi - prints abi version from header info
 * @head: header information
 * Return: void
 */

void print_abi(char *head)
{
	printf("  %-35s", "OS/ABI:");
	if (head[7] == 0)
		printf("UNIX - System V\n");
	else if (head[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (head[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (head[7] == 3)
		printf("UNIX - Linux\n");
	else if (head[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (head[7] == 6)
		printf("UNIX - Solaris\n");
	else if (head[7] == 7)
		printf("UNIX - AIX\n");
	else if (head[7] == 8)
		printf("UNIX - IRIX\n");
	else if (head[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (head[7] == 10)
		printf("UNIX - Tru64\n");
	else if (head[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (head[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (head[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (head[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (head[7] == 15)
		printf("UNIX - AROS\n");
	else if (head[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (head[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02x>\n", head[7]);
	printf("  %-35s%d\n", "ABI Version:", head[8]);
}

/**
 * print_type - prints filetype of ELF from header info
 * @head: header information
 * Return: void
 */

void print_type(char *head)
{
	int i;

	if (head[5] == 1)
		i = 16;
	else
		i = 17;
	printf("  %-35s", "Type:");
	if (head[i] == 1)
		printf("REL (Relocatable file)\n");
	else if (head[i] == 2)
		printf("EXEC (Executable file)\n");
	else if (head[i] == 3)
		printf("DYN (Shared object file)\n");
	else if (head[i] == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown>: %02x%02x\n", head[16], head[17]);
}

/**
 * print_entry - prints entry address of executable from header
 * @head: header information
 * Return: void
 */

void print_entry(char *head)
{
	int index, end;

	printf("  %-35s0x", "Entry point address:");
	if (head[4] == 2)
		end = 0x1f;
	else
		end = 0x1b;
	if (head[5] == 1)
	{
		index = end;
		while (head[index] == 0 && index > 0x18)
			index--;
		printf("%x", head[index--]);
		while (index >= 0x18)
			printf("%02x", (unsigned char) head[index--]);
		printf("\n");
	}
	else
	{
		index = 0x18;
		while (head[index] == 0)
			index++;
		printf("%x", head[index++]);
		while (index <= end)
			printf("%02x", (unsigned char) head[index++]);
		printf("\n");
	}
}

/**
 * main - parses an elf header file
 *
 * @argc: argument count
 * @argv: arugment vector
 *
 * Return: 0 on success
 * 1 on incorrect arg number
 * 2 on file open failure
 * 3 on read failure
 * 4 on failure to read enough bytes for a 32 bit file
 * 98 if elf magic is not matched
 */

int main(int argc, char *argv[])
{
	int opened_file, read_file, i;
	char head[32];

	if (argc != 2)
		return (1);
	opened_file = open(argv[1], O_RDONLY);
	if (opened_file == -1)
		return (1);
	read_file = read(opened_file, head, 32);
	if (read_file == -1)
		return (1);
	if (read_file < 28)
		return (1);
	if (head[0] != 0x7f || head[1] != 'E' || head[2] != 'L' || head[3] != 'F')
	{
		dprintf(STDERR_FILENO,
			"readelf: Error: hellofile: Failed to read file header\n");
		return (98);
	}
	printf("ELF Header:\n  Magic:   ");
	i = 0;
	while (i < 16)
	{
		printf("%02x ", (unsigned int) head[i]);
		i++;
	}
	printf("\n");
	print_class(head);
	print_data(head);
	print_version(head);
	print_abi(head);
	print_type(head);
	print_entry(head);
	close(opened_file);
	return (0);
}
