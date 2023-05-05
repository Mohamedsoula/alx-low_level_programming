#include "main.h"

/**
 * get_bit - Finds the bit value contained in a decimal number at the provided index.
 * @n: searched number
 * @index: bit's index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

