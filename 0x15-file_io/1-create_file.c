#include"main.h"
/**
 * create_file - a function that creates a file
 * @filename: is the name of the file to create 
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fn, a, min = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (min = 0; text_content[min];)
			min++;
	}

	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fn, text_content, min);

	if (fn == -1 || a == -1)
		return (-1);

	close(fn);

	return (1);
}
