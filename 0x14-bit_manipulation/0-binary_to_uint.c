#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: parameter 1
 * Return: res
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i;

	res = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0' ; i++)
	{
		if (b[i] != '0')
			if (b[i] != '1')
				return (0);
		res = res << 1;
		if (b[i] == '1')
			res += 1;
	}
	return (res);
}
