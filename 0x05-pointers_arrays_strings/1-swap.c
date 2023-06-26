#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @x: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: Always 0.
 */
void swap_int(int *x, int *b)
{
	int temp = *x;

	*x = *b;
	*b = temp;
}
