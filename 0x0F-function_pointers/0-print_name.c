#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: parameter 1
 * @f: parameter 2
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
	{
		return;
	}
	f(name);
}
