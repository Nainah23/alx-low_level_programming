#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - It reads a text file and prints
 * it to the POSIX standard output
 * @filename: Is the textfile to be read
 * @letters: total sum of letters to be read
 * Return: w- exact bytes number printed and read
 *	0 if Null or function failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
