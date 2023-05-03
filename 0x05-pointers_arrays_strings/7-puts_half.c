#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, half, ln = 0;

	while (str[ln] != '\0')
		ln++;
	if (ln % 2 == 0)
		half = ln / 2;
	else
		half = (ln + 1) / 2;
	for (i = half; i < ln; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
