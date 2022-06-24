#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passes to it
 * @argc: argument count
 * @argv: argument vector
 * @argv __attribute__((unused)): unused parameter
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
		return (0);
}
