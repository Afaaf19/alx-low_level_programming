#include "main.h"
/**
* _memcpy - a function that copies memory area
*
* @des: input
* @src: input
* @n: input
*
* Return: string dest
*/

char *_memcpy(char *des, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{

des[i] = src[i];

}


return (des);
}
