#include "main.h"
/**
 * _isupper - check uppercase
 * @c: character input
 * Return: Returns 1 if it's upper, 0 if else
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
