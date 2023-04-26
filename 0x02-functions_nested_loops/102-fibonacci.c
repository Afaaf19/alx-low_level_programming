#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int i;
	unsigned long j = 0, k = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = j + k;
		printf("%ld", sum);
		j = k;
		k = sum;
		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
