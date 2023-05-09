#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 * Return: pointer to the byte in s, NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *x;
	char *y;

	for (x = s; *x; x++)
	{
		for (y = accept; *y; y++)
		{
			if (*x == *y)

				return (x);
		}
	}
	return (NULL);
}
