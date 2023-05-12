#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function that looks for prime numbers
 * @n: parameter
 * Return: 1 if it's a prime number, or 0 if else
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_it(n, 2));
}
/**
 * prime_it - function that checks if it prime or not
 * @n: parameter 1
 * @z: parameter 2
 * Return: 1 if it's a prime number, 0 if else
 */
int prime_it(int n, int z)
{
	if (z * z > n)
		return (1);
	else if (n % z == 0)
		return (0);
	else
		return (prime_it(n, z + 1));
}
