#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print(int *array, size_t lower, size_t upper);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* _SEARCH_ALGOS_H_ */
