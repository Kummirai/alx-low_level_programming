#include "main.h"

/**
 * print_square - This function prints a sqaure,
 * followed by a newline
 * @size: The size of the square
 */
void print_square(int size)
{
	int rw, cln;

	if (size > 0)
	{
		for (rw = 0; rw < size; rw++)
		{
			for (cln = 0; cln < size; cln++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
