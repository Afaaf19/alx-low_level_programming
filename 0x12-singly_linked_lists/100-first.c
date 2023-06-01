#include <stdio.h>
void print_it(void) __attribute__((constructor));
/**
 * print_it - function that prints a quote before main
 */
void print_it(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
