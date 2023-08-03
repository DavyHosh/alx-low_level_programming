#include "main.h"

/**
 * print_binary - Outputs the binary representation of a decimal number.
 * @n: Decimal number to convert and print as binary.
 */
void print_binary(unsigned long int n)
{
	int index, count = 0;
	unsigned long int current;

	for (index = 63; index >= 0; index--)
	{
		current = n >> index;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
