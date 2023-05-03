#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 -  function that prints every other character of a string
 * @str: parameter
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int ln = strlen(str);

	while (i < ln)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
