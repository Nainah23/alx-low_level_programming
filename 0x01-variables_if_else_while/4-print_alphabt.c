#include <stdio.h>

/**
 * main - Entry point
 *
 * return: 0 Success
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
