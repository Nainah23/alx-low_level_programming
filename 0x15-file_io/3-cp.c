#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - It allocates 1024 bytes for the buffer
 * @file: the file name for which the buffer stores chars
 * Return: Points to the buffer that has been allocated
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - It closes the file descriptors
 * @fd: Is the file descriptor being closed
 */
void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Cp the file contents into another one
 * @argc: Arg number provided to the prog
 * @argv: Arg pointers array
 * Return: 0 Success
 * Description: if the number of argument is not the correct one -
 *	exit code 97
 *	if file_from does not exist, or if you can not read it
 *	exit code 98
 *	if you can not create or if write to file_to fails
 *	exit code 99
 *	if you can not close a file descriptor
 *	exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
                {
                        dprintf(STDERR_FILENO,
                                "Error: Can't write to %s\n", argv[2]);
                        free(buffer);
                        exit(99);
                }
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
