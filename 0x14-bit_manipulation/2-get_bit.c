#include "main.h"
/**
 * get_bit -returns the value of a bit at a given index
 * @n: parameter 1
 * @index: parameter 2
 * Return: value of bit, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);
	if (index > 64)
		return (-1);
	n = n >> index;
	if ((n & 1) != 0)
		return (1);
	return (0);
}
