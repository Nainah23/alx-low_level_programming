#include "main.h"

/*
 * _islower - checks if a character is lowercase
 *
 * @c: character that is to be verified
 *
 * Return: return 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	return (0);
}
