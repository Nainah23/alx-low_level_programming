#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed in binary representation
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int value;

	for (i = 63; i >= 0; i--)
	{
		value = n >> i;
		if (value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
