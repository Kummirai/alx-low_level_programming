#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - append to text to file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 if success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL) {
        return -1;
    }

    if (text_content == NULL) {
        return 1;
    }

    file = fopen(filename, "a");
    if (file == NULL) {
        return -1;
    }

    fputs(text_content, file);

    fclose(file);
    return 1;
}
