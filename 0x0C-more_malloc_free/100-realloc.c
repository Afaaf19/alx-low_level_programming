#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: parameter 1
 * @old_size: parameter 2
 * @new_size: parameter 3
 * Return: arr /pointer to array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	if (new_size > old_size)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)arr + i) = *((char *)arr + i);
		free(arr);
	}
	return (arr);
}

