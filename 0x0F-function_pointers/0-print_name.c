#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name printed out
 * @f: pointer to a function
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
