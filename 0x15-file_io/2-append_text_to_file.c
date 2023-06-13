#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: parameter 1
 * @text_content: parameter 2
 * Return: 1 if success, or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, ln = 0;

	if (filename ==  NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[ln] != 0)
			ln++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		wr = write(op, text_content, ln);
		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
