#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar('\n');
		}
		i++;
	}
	return (0);
}
