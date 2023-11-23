#include "main.h"

/**
 * get_endianness - This function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *)&i;

	if (*c == 0)
		return (0);
	else
		return (1);
}
