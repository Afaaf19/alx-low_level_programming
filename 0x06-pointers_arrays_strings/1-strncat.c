#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings
 * It will use n bytes from src
 * @src: parameter 1
 * @dest: parameter 2
 * @n: parameter 3
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destln = strlen(dest);

	while (i < n && src[i] != '\0')
	{
		strcat(dest, src);
		i++;
	}
	dest[destln + i] = '\0';
	return (dest);
}
