#include "main.h"
/**
 * create_file - it creates a file
 * @filename: name of the file
 * @text_content: the content of that text
 * Return: 1 if success, or -1 if else
 */
int create_file(const char *filename, char *text_content)
{
	int fidscrip, leng = 0, wri;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[leng])
			leng++;
	}
	fidscrip = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	wri = write(fidscrip, text_content, leng);
	if (fidscrip == -1 || wri == -1)
		return (-1);
	close(fidscrip);
	return (1);
}
