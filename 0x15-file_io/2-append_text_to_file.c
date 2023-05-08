#include "main.h"

/**
 * append_text_to_file - adds text at the file's end.
 * @filename: A pointer to the file's name.
 * @text_content: The string to append to the file's end.
 * Return: if the filename is NULL or the function fails -1.
 *         The user doesn't have write permisions if file doesn't exist -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
