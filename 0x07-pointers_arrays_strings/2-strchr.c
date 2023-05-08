#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string
 * @s: parameter 1
 * @c: parameter 2
 * Return: s if char s found, NULL if char not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
