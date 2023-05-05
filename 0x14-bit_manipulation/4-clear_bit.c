#include "main.h"

/**
 * clear_bit - sets a particular bit's value to 0.
 * @n: pointer indicating the number to change
 * @index: the bit to clear's index
 *
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
