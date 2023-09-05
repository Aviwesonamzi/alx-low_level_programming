#include "main.h"
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: a
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t fn;
	ssize_t a;
	ssize_t v;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	v = read(fn, ptr, letters);
	a = write(STDOUT_FILENO, ptr, v);

	free(ptr);
	close(fn);
	return (a);
}
