#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int slen = 0;

	while (s[slen] != '\0')
	{
		slen++;
	}
	return (slen);
}

