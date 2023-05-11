#include "main.h"
/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: parameter
 * Return: square
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 1));
}
/**
 * _sqrt - function that allows us identify the root square
 * @n: parameter 1
 * @ni: parameter 2
 * Return: square
 */
int _sqrt(int n, int ni)
{
if (ni * ni == n)
return (ni);
else if (ni * ni < n)
return (_sqrt(n, ni + 1));
else
return (-1);
}
