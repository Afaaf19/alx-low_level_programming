#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: parameter 1
 * @size: parameter 2
 * Return: res /pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	res = malloc(nmemb * size);
	if (res == 0)
	{
		return (NULL);
	}
	nmemb *= size;
	while (nmemb--)
	{
		res[nmemb] = 0;
	}
	return (res);
}
