#include <stdio.h>
#include "main.h"
/**
 * main - print number of arguments passed to the program
 * @argc: argument number
 * @argv: argument array
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
