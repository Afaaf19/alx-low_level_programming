#include "main.h"
/**
 * set_bit - function that returns the of a bit at given index
 * @n: parameter 1
 * @index: parameter 2
 * Return: value of the bit if success, or -1 if else
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int here = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = *n | (here << index);
	return (1);
}

