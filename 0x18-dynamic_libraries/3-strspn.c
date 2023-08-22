#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
* _strspn - a function that gets the length of a prefix substring
*
* @s: input
* @accept: input
*
* Return: counter
*/

unsigned int _strspn(char *s, char *accept)
{

int i, z;
unsigned int counter = 0;
bool fd;

for (i = 0; s[i] != '\0'; i++)
{
fd = false;
for (z = 0; accept[z] != '\0'; z++)
{
if (s[i] == accept[z])
{
counter++;
fd = true;
break;
}
}

if (!fd)
break;

}

return (counter);
}
