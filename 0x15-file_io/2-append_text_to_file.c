#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, min = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (min = 0; text_content[min];)
			min++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, min);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
