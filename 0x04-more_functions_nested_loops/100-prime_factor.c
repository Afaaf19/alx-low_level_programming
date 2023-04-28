#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 1231952; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%ld\n", n);
	return (0);
}
