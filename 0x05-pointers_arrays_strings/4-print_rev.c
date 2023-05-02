#include "main.h"
/**
 * print_rev - function that prints a string, in reverse.
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\n')
	{
		rev++;
	}
	while (rev > 0)
	{
		rev--;
		_putchar(s[rev]);
	}
	_putchar('\n');
}
