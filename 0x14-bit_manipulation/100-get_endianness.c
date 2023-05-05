#include "main.h"

/**
 * get_endianness - determines whether a machine is big or little endian
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
