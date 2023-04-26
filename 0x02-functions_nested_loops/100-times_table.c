#include "main.h"
/**
 * print_times_table - table with dimenion xn
 * @n: input dimension
 * Code ASCII is used
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, d;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n ; i++)
		{
			for (j = 0; j <= n; j++)
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
}
