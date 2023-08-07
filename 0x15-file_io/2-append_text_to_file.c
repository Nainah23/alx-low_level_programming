#include "main.h"
/**
 * append_text_to_file - It appends text at the end of a file
 * @filename: it points to the filename
 * @text_content: The content(string) to be appended to the file
 * Return: -1 if NULL or function failure
 *	1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int aq, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	aq = open(filename, O_WRONLY | O_APPEND);
	w = write(aq, text_content, len);

	if (aq == -1 || w == -1)
		return (-1);

	close(aq);

	return (1);
}
