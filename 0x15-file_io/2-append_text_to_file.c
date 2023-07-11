#include "main.h"
/**
 * append_text_to_file - it appends text at the end of a file
 * @filename: parameter 1
 * @text_content: parameter 2
 * Return: if the file exists, or -1 if it does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ope, wri, leng = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[leng])
			leng++;
	}
	ope = open(filename, O_WRONLY | O_APPEND);
	if (ope == -1)
		return (-1);
	if (text_content != NULL)
	{
		wri = write(ope, text_content, leng);
		if (wri == -1)
		{
			close(ope);
			return (-1);
		}
	}
close(ope);
return (1);
}
