#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: parameter 1
 * @size: parameter 2
 * @action: parameter 3
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == 0 || size == 0 || action == 0)
	{
		return;
	}
	else
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
