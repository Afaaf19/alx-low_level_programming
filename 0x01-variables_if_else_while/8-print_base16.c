#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alyaws 0 (Success)
 */
int main(void)
{
	int num;
	int alph;

	for (num = '0'; num <= '9'; )
	{
		putchar(num);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
