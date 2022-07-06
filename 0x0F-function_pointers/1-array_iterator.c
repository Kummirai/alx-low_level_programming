#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executed another function
 * @size: size of the array
 * @action: function to use on array
 * @array: array to iterate over
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
