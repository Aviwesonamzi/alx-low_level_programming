#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the uni
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int uni_val;

	if (index > 63)
		return (-1);

	uni_val = (n >> index) & 1;

	return (uni_val);
}
