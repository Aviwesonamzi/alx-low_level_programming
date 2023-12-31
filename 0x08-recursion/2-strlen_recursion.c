#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int kimba = 0;

	if (*s)
	{
		kimba++;
		kimba += _strlen_recursion(s + 1);
	}

	return (kimba);
}

