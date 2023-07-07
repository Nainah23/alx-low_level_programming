#include <stdio.h>
/**
 * _strlen - Returns string length
 * @str: The string to get the length of
 * Return: The @str length
 */
size_t _strlen(const char *str)
{
        size_t length = 0;

        while (*str++)
        length++;
        return (length);
}
