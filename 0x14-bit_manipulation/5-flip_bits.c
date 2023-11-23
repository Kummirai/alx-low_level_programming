#include "main.h"

/**
 * flip_bits - This function returns the number of bits you would
 * need to flip to get from one number to another
 * @n: The unsigned long int bit to flip
 * @m: The unsigned long int bit to flip to
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, bit_flip = n ^ m;

	while (bit_flip)
	{
		if ((bit_flip & 1) != 0)
			count++;

		bit_flip >>= 1;
	}

	return (count);
}

