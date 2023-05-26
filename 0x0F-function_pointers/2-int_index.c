#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer
 * @array: parameter 1
 * @size: parameter 2
 * @cmp: parameter 3
 * Return: i, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
