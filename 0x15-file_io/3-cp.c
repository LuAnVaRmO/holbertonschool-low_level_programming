#include "holberton.h"
/**
  * printerror -  print errors
  * @message: error message to print
  * @file: the file name
  * @code: the exit status
  * Return: void
  */
void printerror(char *message, char *file, int code)
{
	dprintf(STDERR_FILENO, "%s%s\n", message, file);
	exit(code);
}
/**
 * main - Entry point
 * @argc: the size of arguments
 * @argv: the arguments
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	int fddest, fdsrc, vread, vwrite;
	char buffer[1024];
	mode_t perms;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fdsrc = open(argv[1], O_RDONLY);
	if (fdsrc == -1)
		printerror("Error: Can't read from file ", argv[1], 98);
	perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fddest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
	if (fddest == -1)
		printerror("Error: Can't write to ", argv[2], 99);
	vread = 1024;
	while (vread == 1024)
	{
		vread = read(fdsrc, buffer, 1024);
		if (vread == -1)
			printerror("Error: Can't read from file ", argv[1], 98);
		vwrite = write(fddest, buffer, vread);
		if (vwrite == -1)
			printerror("Error: Can't write to ", argv[2], 99);
		if (vwrite != vread)
			printerror("Error: Can't write to ", argv[2], 99);
	}
	if (close(fdsrc))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdsrc);
		exit(100);
	}
	if (close(fddest))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fddest);
		exit(100);
	}
	return (0);
}
