#include "main.h"

/**
 * flip_bits - Calculates the count of bits that need to be flipped
 * to transform one number into another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, count = 0;
	unsigned long int current;
	unsigned long int xor_result = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		current = xor_result >> index;
		if (current & 1)
			count++;
	}

	return (count);
}
