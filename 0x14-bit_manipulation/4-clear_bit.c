#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: is a pointyer to the no. that's to be changed
 * @index: bit index to clear
 * Return: 1 if success and -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
