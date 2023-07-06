#include "main.h"

/**
 * binary_to_uint - function that converts from binary to decimal
 * @b: numbert to be converted
 * Return: conv / vonverted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;
	int i = 0;

	conv = 0;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		conv = conv << 1;
		if (b[i] == '1')
			conv += 1;
	i++;
	}
	return (conv);
}
