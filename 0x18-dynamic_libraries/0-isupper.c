#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: is the character to be checked
 * Return: 1 if c uppercase, 0 if c is otherwise
 */
int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
