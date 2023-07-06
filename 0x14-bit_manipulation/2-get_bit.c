#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: parameter 1
 * @index: parameter 2
 * Return: value of the bit if success, or -1 if else
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int here = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	here <<= index;

	if (here & n)
		return (1);
	else
		return (0);
}
