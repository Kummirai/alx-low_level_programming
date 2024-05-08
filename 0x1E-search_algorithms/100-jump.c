#include "search_algos.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0) {
        return -1; // Invalid input or empty array
    }

    // Calculate the jump step (square root of the array size)
    size_t jump = (size_t)sqrt(size);

    // Initialize the search range
    size_t left = 0;
    size_t right = jump;

    // Perform the jump search
    while (right < size && array[right] < value) {
        printf("Comparing array[%zu] = %d with value %d\n", right, array[right], value);
        left = right;
        right += jump;
    }

    // Perform linear search within the current block
    for (size_t i = left; i < size && i <= right; ++i) {
        printf("Comparing array[%zu] = %d with value %d\n", i, array[i], value);
        if (array[i] == value) {
            return (int)i; // Found the value
        }
    }

    return -1; // Value not found
}
