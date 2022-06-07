#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - Print alphabet in lowercase.
 *
 */
void print_alphabet(void)
{
	int MIL;

	for (MIL = 'a'; MIL <= 'z'; MIL++)
	{
		_putchar(MIL);
	}
	_putchar('\n');
}
