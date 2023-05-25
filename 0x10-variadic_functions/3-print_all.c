#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: parameter
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separ = "";
	va_list lst;

	va_start(lst, format);
	if (format != 0)
	{
		while (*(format + i) != 0)
		{
			switch (*(format + i))
			{
				case 'c':
					printf("%s%c", separ, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(lst, double));
					break;
				case 's':
					s = va_arg(lst, char *);
					if (s == 0)
						s = "(nil)";
					printf("%s%s", separ, s);
					break;
				default :
					i++;
					continue;
			}
			separ = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(lst);
}

