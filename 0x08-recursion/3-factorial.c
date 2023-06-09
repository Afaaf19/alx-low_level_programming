#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: parameter
 * Return: -1, 1 or factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
