#include "main.h"
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars
 * @size: parameter 1
 * @c: parameter 2
 * Return: pointer to the array, or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrchar;

	arrchar = (char *) malloc(size * sizeof(char));
	if (size == 0 || arrchar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(arrchar + i) = c;
	}
	return (arrchar);
}
