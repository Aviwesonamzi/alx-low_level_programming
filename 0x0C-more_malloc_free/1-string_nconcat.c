#include<stdlib.h>
#include"main.h"
/**
 * string_nconcat - joins two strings
 * @s1: first string
 * @s2: second string
 * @n: total amount of bytes
 *
 * Return:point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int ls1, ls2, lin, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lin = ls1 + n;

	ptr = malloc(lin + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lin; i++)
		if (i < ls1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - ls1];

	ptr[i] = '\0';

	return (ptr);
}
