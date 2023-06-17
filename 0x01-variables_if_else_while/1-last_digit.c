#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 0 Always on success
 */

int main(void)
{
	int n, last;
	char compl[50};
	
	srand(time(0));
	n = rand() - RAND_MAX /2;
	last = n % 10;
	if (last > 5)
		strcpy(compl, "and is greater than 5\n");
	else if (last == 0)
		strcpy(compl, "and is 0\n");
	else
		strcpy(compl, "and is less than 6 and not 0\n");
	printf("Last digit of %d is %d %s", n, last, compl);
	return (0);
}
