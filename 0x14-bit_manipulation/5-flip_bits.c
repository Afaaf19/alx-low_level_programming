#include "main.h"
/**
 * flip_bits - returns the number of bits will be needed to flip
 * @n: number 1
 * @m: number 2
 * Return: nbits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int nbits = 0;

	i = n ^ m;
	while (i > 0)
	{
		nbits++;
		i &= (i - 1);
	}
	return (nbits);
}

