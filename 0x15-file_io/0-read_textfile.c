#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the textfile and print to STDOUT.
 * @filename: reading text file
 * @letters: the number of letters to read
 * Return: w- number of bytes printed
 *        0 when function fail or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(f, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(f);
	return (w);
}
