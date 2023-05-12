#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments of strings
 * Return: 0 if success
 */
int main(int argc, __attribute__((__unused__))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
