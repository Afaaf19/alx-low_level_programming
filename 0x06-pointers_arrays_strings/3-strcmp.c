#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return:cmp
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (i < *s1 && i < *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
