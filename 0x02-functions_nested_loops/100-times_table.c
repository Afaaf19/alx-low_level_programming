#include "main.h"
/**
 * print_times_table - table with dimenion xn
 * @n: input dimension
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, d;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n ; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				d = i * j;
				if (d < 100)
					_putchar(' ');
				if (d < 10)
					_putchar(' ');
				if (d >= 100)
				{
					_putchar((d / 100) + '0');
					_putchar(((d / 10)) % 10 + '0');
				}
				else if (d <= 99 && d >= 10)
				{
					_putchar((d / 10) + '0');
				}
				_putchar((d % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
