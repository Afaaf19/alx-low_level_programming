#include "main.h"
/**
 * _isdigit - check for digit character
 * CODE ASCII is used in this function
 * @c: The variable to test with
 * Return: 1 for digit character, 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
