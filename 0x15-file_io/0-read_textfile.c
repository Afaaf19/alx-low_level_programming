#include "main.h"
/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: parameter 1
 * @letters: parameter 2
 * Return: nb /the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *bff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bff = malloc(sizeof(char) * letters);
	if (bff == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, bff, letters);
	if (rd == -1)
	{
		free(bff);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, bff, rd);
	if (wr == -1)
	{
		free(bff);
		close(fd);
		return (0);
	}
	free(bff);
	close(fd);
	return (wr);
}
