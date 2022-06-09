#include "main.h"

/**
 * more_numbers - This function prints 10 times the numbers
 * from 0-14, followed by a newline
 */
void more_numbers(void)
{
	int mil, ton, kum;

	for (mil = 0; mil <= 9; mil++)
	{
		for (ton = 0; ton < 15; ton++)
		{
			if (ton > 9)
			{
				kum = ton / 10;
				_putchar(kum + '0');
			}
			_putchar(ton % 10 + '0');
		}
		_putchar('\n');
	}
}
