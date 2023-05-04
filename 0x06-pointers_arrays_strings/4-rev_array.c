#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter 1
 * @n: parameter 2
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
