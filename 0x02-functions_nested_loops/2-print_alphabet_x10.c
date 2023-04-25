#include "main.h"
/**
 * print_alphabet_x10 - alphabets 10 times
 *
 * Return : 0 SUCCESS
 */
void print_alphabet_x10(void)
{
	int i, alphabet;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 97; alphabet <= 122; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
