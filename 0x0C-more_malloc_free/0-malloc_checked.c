#include<stdlib.h>
#include"main.h"
/**
 * main - allocate memory using malloc
 * @b - number of bytes to allocate
 *
 * Return: a pointer to a allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
