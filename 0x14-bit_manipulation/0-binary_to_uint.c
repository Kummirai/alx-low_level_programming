#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts binary number to an unsigned integer
 * @b: pointer to string containing characters to be converted
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int decimal = 0;

	/*Return 0 if b is NULL*/
	if (b == NULL)
	{
		return (0);
	}

	while (b && *b)
	{
		/* if string has anything other than 1 or 0 */
		if (*b < '0' || *b > '1')
			return (0);
		/* math conversion of binary to decimal */
		decimal = decimal * 2 + *b - '0';
		b++;
	}
	return (decimal);
}

