#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * STDOUT
 * @filename: The filename to be read from
 * @letters: number of letters it should read and print
 * Return: a - actual number of letters it could read and print
 * 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pt;
	ssize_t fd;
	ssize_t a;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	pt = malloc(sizeof(char) * letters);
	r = read(fd, pt, letters);
	a = write(STDOUT_FILENO, pt, r);

	free(pt);
	close(fd);
	return (a);
}
