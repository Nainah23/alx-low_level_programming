#include "main.h"
/**
 * rev_strinf - Reverses a string
 * @s: The string to be reversed
 * Description: This  function takes a string and reverses its contents in place. It swaps characters from the beginning and end of the string until it reaches the middle.
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
