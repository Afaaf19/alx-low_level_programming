#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: parameter 1
 * @n: parameter 2
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nb;

	va_start(nb, n);
	while (i < n)
	{
		printf("%d", va_arg(nb, int));
		if (i != (n - 1))
			if (separator != NULL)
				printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(nb);
}
