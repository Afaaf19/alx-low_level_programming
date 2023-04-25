#include "main.h"
/**
 * _isalpha - this function checks if the input is alphabet or not
 * @c : variable to check the input with
 * Code ASCII used in this function
 * Return: 1 if SUCCESS
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
