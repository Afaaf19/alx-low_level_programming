#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: ptr to that file
 * @letters: the number of letters must be read printed
 * Return:  the actual number of letters it could read and print
 * if the file can not be opened or read, return 0, if null return 0 as well
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fid, rdi, wri;
	char *buf;

	if (filename == NULL)
		return (0);
	fid = open(filename, O_RDONLY);
	if (fid == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fid);
		return (0);
	}
	rdi = read(fid, buf, letters);
	if (rdi == -1)
	{
		free(buf);
		close(fid);
		return (0);
	}
	wri = write(STDOUT_FILENO, buf, rdi);
	if (wri == -1)
	{
		free(buf);
		close(fid);
		return (0);
	}
	free(buf);
	close(fid);
	return (wri);
}
