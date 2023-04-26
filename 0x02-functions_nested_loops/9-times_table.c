#include "main.h"
/**
 * times_table - table with dimenion x9
 * Code ASCII is used
 * Return: void
 */
void times_table(void)
{
	int i, j, d;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			d = j * i;
			if (j == 0)
				_putchar(d + '0');
			else if (d < 10 && !j == 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(d + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

