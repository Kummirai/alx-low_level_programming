#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - This function prints the alphabet 10 times
 * in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	int word, mil;

	for (mil = 0; mil < 10; mil++)
	{
		for (word = 'a'; word <= 'z'; word++)
		{
			_putchar(word);
		}
		_putchar('\n');
	}
}
