#include "holberton.h"
/**
 * append_text_to_file - append text to end of a file
 * @filename: the name to the file to read
 * @text_content: the strig to contain the file
 * Return: 1 if good or -1 if fail
 */
int main(int argc, char *argv[])
{
	int fddest, fdsrc, vread, vwrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fdsrc = open(argv[1], O_RDONLY);
	if (fdsrc == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", argv[1]);
		exit(98);
	}
	fddest = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 00664);
	if ( fddest == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", argv[2]);
		exit(99);
	}
	vread = 1024;
	while (vread == 1024)
	{
		vread = read(fdsrc, buffer, 1024);
		if (vread == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", argv[1]);
			exit(98);
		}
		vwrite = write(fddest, buffer, vread);
		if (vwrite == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", argv[2]);
			exit(99);
		}
		if (vwrite != vread)
		{
			dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", argv[2]);
			exit(99);
		}
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
