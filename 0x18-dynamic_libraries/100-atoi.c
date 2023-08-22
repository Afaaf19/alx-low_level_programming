#include "main.h"
/**
 * _atoi - function that converts a string to integer
 * @s: string
 * Return: converted string
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int digit;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			res = res * 10 + digit;
		}
		else if (res != 0)
		{
			break;
		}
		s++;
	}

	return (sign * res);
}
