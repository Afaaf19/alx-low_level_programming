#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at given index
 * @n: parameter 1 / number to set
 * @index: parameter 2 /index where to set set the bit
 * Return: 1 if success, or -1 if else
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int here = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	here = ~(here << index);
	*n = *n & here;
	return (1);
}
