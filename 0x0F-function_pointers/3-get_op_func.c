#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to perform opertion
 * @s: operator passed as an argument
 * Return: function or NULL if s does not match the expected operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	i++;
	}
	printf("Error\n");
	exit(99);
}
