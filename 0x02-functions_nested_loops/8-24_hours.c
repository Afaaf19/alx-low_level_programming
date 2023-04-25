#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 0 success
 */
void jack_bauer(void)
{
	int xh, xm;

	for (xh = 0; xh < 24; xh++)
	{
		for (xm = 0; xm < 60; xm++)
		{
			_putchar((xh / 10) + '0');
			_putchar((xh % 10) + '0');
			_putchar(':');
			_putchar((xm / 10) + '0');
			_putchar((xm % 10) + '0');
			_putchar('\n');
		}
	}
}
