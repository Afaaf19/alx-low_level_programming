#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: parameter 1
 * @b: parameter 2
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
