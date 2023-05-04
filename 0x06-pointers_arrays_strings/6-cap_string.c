#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @strcp:wq
 * cp: parameter
 * Return: strcp
 */
char *cap_string(char *strcp)
{
	int i = 0;

	while (strcp[i])
	{
		while (!(strcp[i] >= 'a' && strcp[i] <= 'z'))
			i++;
		if (strcp[i - 1] == ' ' ||
			strcp[i - 1] == '\t' ||
			strcp[i - 1] == '\n' ||
			strcp[i - 1] == ',' ||
			strcp[i - 1] == ';' ||
			strcp[i - 1] == '.' ||
			strcp[i - 1] == '!' ||
			strcp[i - 1] == '?' ||
			strcp[i - 1] == '"' ||
			strcp[i - 1] == '(' ||
			strcp[i - 1] == ')' ||
			strcp[i - 1] == '{' ||
			strcp[i - 1] == '}' ||
			i == 0)
		{
		strcp[i] -= 32;
		}
		i++;
	}
	return (strcp);
}
