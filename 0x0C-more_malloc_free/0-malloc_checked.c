#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: parameter that gives number of bytes
 * Return: alloc
 */
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
