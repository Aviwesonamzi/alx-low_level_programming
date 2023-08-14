#include<stdio.h>
/**
 * pre_defined - prints the name of the file it was compiled from
 * @\n: create an readable code
 *
 * Return: always success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
