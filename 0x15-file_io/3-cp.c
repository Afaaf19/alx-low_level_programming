#include "main.h"

/**
 * cp_file - function that copies the content of a file to another file
 * @fd_from: file to copy from
 * @fd_to: file to copy to
 * Return: void
 */
void cp_file(const char *fd_from, const char *fd_to)
{
	int file_from;
	int file_to;
	ssize_t nb_read;
	char buff[BUFF_SIZE];
	mode_t md = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	file_from = open(fd_from, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from);
		exit(98);
	}

	file_to = open(fd_to, O_WRONLY | O_CREAT | O_TRUNC, md);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to);
		exit(99);
	}

	while ((nb_read = read(file_from, buff, BUFF_SIZE)) > 0)
	{
		if (write(file_to, buff, nb_read) != nb_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to);
			exit(99);
		}
	}
	if (nb_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	cp_file(argv[1], argv[2]);

	return (0);
}
