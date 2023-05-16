#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: new pointer to string if success, NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, ln1, ln2;
	char *cat;

	ln1 = 0;
	ln2 = 0;
	while (s1 && s1[ln1])
	{
		ln1++;
	}
	while (s2 && s2[ln2])
	{
		ln2++;
	}
	cat = (char *)malloc((ln1 + ln2 + 1) * (sizeof(char)));
	if (cat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		cat[i + j] = s2[j];
	}
	return (cat);
}
