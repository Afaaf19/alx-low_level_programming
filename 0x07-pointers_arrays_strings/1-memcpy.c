#include "main.h"
#include <string.h>
/**
 * _memcpy - function that copies memory area
 * @dest: parameter 1 /destination memory area
 * @src: parameter 2 /source memory area
 * @n: parameter 2 /bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
