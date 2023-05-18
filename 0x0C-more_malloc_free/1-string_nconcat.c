#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * @n: parameter 3
 * Return: cat /the newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int ln1, i, j;

	ln1 = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	/*calculate the length of given string*/
	while (s1[i])
	{
		ln1++;
		i++;
	}
	cat = (char *)  malloc((ln1 + 1) * (sizeof(char)));
	if (cat == NULL)
	{
		return (NULL);
	}
	/*duplicate the string from a place to another one*/
	ln1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		cat[ln1++] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		cat[ln1++] = s2[j];
	}
	cat[ln1] = '\0';
	return (cat);
}
