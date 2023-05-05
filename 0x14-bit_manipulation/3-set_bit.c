#include "main.h"

/**
 * set_bit - puts a bit at certain index 1
 * @n: pointer to the number to be selected
 * @index: to set the bit's index to 1
 *
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
