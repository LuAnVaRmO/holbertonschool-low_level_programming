#include "holberton.h"
/**
 * read_textfile - Open and read a file
 * @filename: the name to the file to read
 * @letters: the size of the char to read
 * Return: the text on the std output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sterr, msge;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	sterr = read(fd, buff, letters);
	close(fd);
	if (sterr == -1)
	{
		free(buff);
		return (0);
	}
	msge = write(STDOUT_FILENO, buff, sterr);
	if (msge == -1)
		return (0);
	if (msge != sterr)
		return (0);
	free(buff);
	return (msge);
}
