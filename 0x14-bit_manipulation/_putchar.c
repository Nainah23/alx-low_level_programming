#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes char c to stdout
 * @c: the character to print
 * Return: 1 on success
 * 0, if error and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
