#include "main.h"
/**
* _strcat - function that concatenates two strings
* @des: distinat
* @src: source
* Return: destination
*/

char *_strcat(char *des, char *src)
{
int j, i = 0;

while (des[i] != '\0')
{
i++;
}

for (j = 0; src[j] != '\0'; j++)
{
des[i] = src[j];
i++;
}

des[i] = '\0';

return (des);
}
