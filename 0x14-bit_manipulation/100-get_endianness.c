#include "main.h"

/**
 * get_endianness - it chechs the endianness
 * Return: 0 if it is a big endian, 1 if little one
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *cha = (char *)&i;

	if (*cha)
		return (1);
	return (*cha);
}
