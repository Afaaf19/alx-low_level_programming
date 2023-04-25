#include "main.h"
/**
 * _islower - check whether the character is lowercase or not
 * Code ASCII is used in this function
 * @c: variable to determine if input is lowercase
 * Return: 1 if SUCCESS
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
else
return (0);
}
