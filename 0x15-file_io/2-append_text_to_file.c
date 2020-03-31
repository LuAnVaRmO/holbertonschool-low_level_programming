#include "holberton.h"
/**
 * append_text_to_file - append text to end of a file
 * @filename: the name to the file to read
 * @text_content: the strig to contain the file
 * Return: 1 if good or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, msge, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0' ; i++)
		;
	msge = write(fd, text_content, i);
	close(fd);
	if (msge == -1)
		return (-1);
	return (1);
}
