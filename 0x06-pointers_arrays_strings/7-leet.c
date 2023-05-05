#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: parameter
 * Return: str
 */
char *leet(char *str)
{
	int i = 0, j = 0;
	char s1[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char s2[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s2[j])
				str[i] = s1[j];
		}
		i++;
	}
	return (str);
}

