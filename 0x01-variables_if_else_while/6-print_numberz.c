#include <stdio.h>

/**
 * main - This program prints all single digit numbers of
 * base 10 starting from 0, followed by a new line, using only putchar to print
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
