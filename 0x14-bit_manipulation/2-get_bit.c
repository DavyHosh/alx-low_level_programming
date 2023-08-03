#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at an index in a decimal number.
 * @n: Decimal number to examine.
 * @index: Index of the bit to retrieve.
 *
 * Return: The value of the requested bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
