#include "main.h"
#include <string.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: parameter 1 /filler
 * @n: parameter 2 /to be filled
 * @b: parameter 3 /constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
