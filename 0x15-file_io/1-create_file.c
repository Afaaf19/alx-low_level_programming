#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: parameter 1
 * @text_content: parameter 2
 * Return: 1 if success, or -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[ln] != 0)
			ln++;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	wr = write(fd, text_content, ln);
	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
