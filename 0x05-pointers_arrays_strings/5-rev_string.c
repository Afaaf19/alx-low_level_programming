#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 * @s: parameter
 * Return: reversed string
 */
void rev_string(char *s)
{
	int ln = strlen(s);
	int i = 0;
	char tmp;

	while (i < ln / 2)
	{
		tmp = s[i];
		s[i] = s[ln - 1 - i];
		s[ln - 1 - i] = tmp;
		i++;
	}
}
