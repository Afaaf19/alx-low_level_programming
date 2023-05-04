#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
