#include "main.h"
#include <unistd.h>
/**
 * _putchar - write "c" to stdout
 * @c: printed character
 *
 * Return: succeed 1.
 * error, return -1, error set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
