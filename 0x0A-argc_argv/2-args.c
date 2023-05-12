#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments of strings
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
