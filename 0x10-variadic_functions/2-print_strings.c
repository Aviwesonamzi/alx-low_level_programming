#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: it is not printed if the separator is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ptr;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		ptr = va_arg(strings, char *);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
