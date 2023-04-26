#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int i = 0, j = 1, add = 0;
	int sum = 0;

	while (add < 4000000)
	{
		add = i + j;
		i = j;
		j = add;
		if (add % 2 == 0)
			sum += add;
	}
	printf("%d\n", sum);
	return (0);
}
