#include "main.h"

/**
 * print_diagonal - This function draws a diagonal line
 * on the terminal
 * @n: The number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int l, p;

	if (n > 0)
	{
		for (p = 0; p < n; p++)
		{
			for (l = 0; l < p; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
	if (n <= 0)
		_putchar('\n');
}
