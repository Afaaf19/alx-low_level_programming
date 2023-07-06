#include "main.h"

/**
 * print_binary - function that prints in binary
 * @n: parameter
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int pp;
	int count = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((n & (i << count)) == 0)
		count--;
	for (pp = count; pp >= 0; pp--)
	{
		if ((n & (i << pp)))
			_putchar('1');
		else
			_putchar('0');
	}
}
