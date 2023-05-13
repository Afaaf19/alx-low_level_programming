#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *cc = argv[i];

		for (j = 0; cc[j] != '\0'; j++)
		{
			if (cc[j] < '0' || cc[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
