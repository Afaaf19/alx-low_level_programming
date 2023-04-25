#include "main.h"
/**
 * print_last_digit - function that prints the last digit on a number
 * @n: input variable
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int val;

	val = n % 10;
	if (val < 0)
	{
		val = val * -1;
	}
	_putchar (val + '0');
	return (val);
}
