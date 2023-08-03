#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string which contains the binary number
 *
 * Return: the unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_res = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_res = 2 * dec_res + (b[i] - '0');
	}
	return (dec_res);
}
