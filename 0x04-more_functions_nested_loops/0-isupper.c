#include "main.h"
/**
 * _isupper - checks whether the char is uppercase or not
 * CODE ASKII is used in this function
 * @c: variable to test if the variable is uppercase
 * Return: 1 if success, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
