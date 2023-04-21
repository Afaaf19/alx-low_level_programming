#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph, ALPH;

	alph = 'a';
	ALPH = 'A';
while (alph <= 'z')
{
putchar(alph);
alph++;
}
while (ALPH <= 'Z')
{
putchar(ALPH);
ALPH++;
}
putchar('\n');
return (0);
}
