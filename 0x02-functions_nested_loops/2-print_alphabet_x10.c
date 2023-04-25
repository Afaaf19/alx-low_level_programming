#include "main.h"
/**
 * print_alphabet_x10 - alphabets 10 times
 *
 * Return : 0 SUCCESS
 */
void print_alphabet_x10(void)
{
	int i, alphabet;

	alphabet = 97;
	for (i = 0; i <= 10; i++)
	{
		while (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}
