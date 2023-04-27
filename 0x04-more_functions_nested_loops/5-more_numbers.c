#include "main.h"

/**
   * more_numbers - prints 10 times the numbers, from 0 to 14,
   * Code ASCII is used in this function
   * Return: Always 0
 */
void more_numbers(void)
{
	int i = 0, c = 0;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
