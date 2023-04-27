#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * CODE ASCII is used
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int c = 48;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
