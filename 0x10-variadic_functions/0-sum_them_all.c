#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: parameter /number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list plus;
	unsigned int i, sum = 0;

	va_start(plus, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(plus, int);
	}
		va_end(plus);
		return (sum);
}
