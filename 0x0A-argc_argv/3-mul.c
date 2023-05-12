#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of args
 * @argv: array of strings
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int n1, n2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;
	printf("%d\n", mult);
	return (0);
}
