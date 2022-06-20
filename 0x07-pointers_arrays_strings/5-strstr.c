#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to be scanned
 * @needle: The substring to be located
 *
 * Return: If the substring is located - a pointer to the beginning
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
