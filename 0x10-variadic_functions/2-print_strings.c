#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: parameter 1
 * @n: parameter 2
 * Return: sprint
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list sprint;

	va_start(sprint, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(sprint, char*);
		if (string  == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(sprint);
}

