#include "main.h"
/*
 * _islowe - controls if a character is lowercase
 * @c: character that is to be verified
 *
 * Return: return 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);	
	return (0);
}
