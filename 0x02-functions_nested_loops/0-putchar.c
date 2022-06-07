#include <stdio.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	int MIL;

	for (MIL = 0; MIL < 8; MIL++)

	_putchar(word[MIL]);
	_putchar('\n');
	return (0);
}
