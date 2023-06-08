#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a giveen index
 * @n: parameter 1
 * @index: parameter 2
 * Return: 1 if success, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n ^= (1 << index);
	return (1);
}