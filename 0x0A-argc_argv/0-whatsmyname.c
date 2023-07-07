#include <stdio.h>
#include "main.h"
/**
 * main - prints the program name
 * @argc: argument name
 * @argv: arguments array
 * Return: 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
