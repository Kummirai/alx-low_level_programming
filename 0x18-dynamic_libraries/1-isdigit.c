#include "main.h"

/**
 *_isdigit - function that checks for a digit
 *@c: is the character to be checked
 *Return: 1 if c is a digit, 0 if c is otherwise
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
