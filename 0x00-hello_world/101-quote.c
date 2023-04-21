#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char chartab[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(1, chartab, 59);
return (1);
}
