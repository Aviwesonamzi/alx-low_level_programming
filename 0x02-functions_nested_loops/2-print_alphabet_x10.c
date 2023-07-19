#include"main.h"
/*
 * print_alphabet_x10
 *
 * return: 0
 */
void print_alphabet_x10(void)
{
	char av;
	int i;
 
	i = 0;

	while (i < 10)
	{
         
		av = 'a';
		while (av <= 'z')
		{
			_putchar(av);
			av++;
		}
		_putchar('\n');
		i++;
	}
}

