#include "main.h"
/**
 * print_alphabet_x10 - alphabets 10 times
 *
 * Return : 0 SUCCESS
 */
void print_alphabet_x10(void)
{
	int i, alphabet;

	i = 0;
	alphabet = 97;
	while (i < 11)
	{
		while (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
