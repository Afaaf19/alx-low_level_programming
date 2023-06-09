#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: parameter 1
 * @index: parameter 2
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
