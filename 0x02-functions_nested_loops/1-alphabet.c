#include "main.h"
/**
 * print_alphabet - function that prints alphabets in lowercase
 * Code ASCII is used to replace our characters
 * return void
 */
void print_alphabet(void)
{
	int alphabet;

	alphabet = 97;
	while (alphabet <= 122)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
