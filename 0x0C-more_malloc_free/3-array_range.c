#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: parameter 1
 * @max: parameter 2
 * Return: array /the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int s, i;

	s = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	arr = (int *) malloc(s * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		*(arr + i) = min + i;
	}
	return (arr);
}
