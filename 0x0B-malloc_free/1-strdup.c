#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: parameter
 * Return: returns a pointer to the duplicated string if success
 * if insufficient memory was available returns NULL
 */
char *_strdup(char *str)
{
	unsigned int i, ln = 0;
	char *duplic;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[ln])
	{
		ln++;
	}
	duplic = (char *) malloc((ln + 1) * sizeof(char));
	if (duplic == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ln; i++)
	{
		duplic[i] = str[i];
	}
	return (duplic);
}
