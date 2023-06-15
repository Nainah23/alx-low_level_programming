#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str[] = "This is a string";
	
	fwrite(str, sizeof(char), strlen(str), stderr);
	return (1);
}
