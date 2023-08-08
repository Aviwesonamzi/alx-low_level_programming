#include "main.h"		
#include <stdlib.h>	
/**	
 * str_concat - get ends of input and add together for size	
 * @s1: input one to concat	
 * @s2: input two to concat	
 * Return: s1 and s2	
 */	
char *str_concat(char *s1, char *s2)	
{
		
	char *sonamzi;
		
	int i, b;
		

		
	if (s1 == NULL)
	{
		
		s1 = "";
	}	
	if (s2 == NULL)
	{	
		s2 = "";
	}	

		
		i = b = 0;
		
	while (s1[i] != '\0')
		
		i++;
		
	while (s2[b] != '\0')
		
		b++;
		
	sonamzi = malloc(sizeof(char) * (i + b + 1));
		
	
	if (sonamzi == NULL)
		
		return (NULL);
		
	i = b = 0;
		
	while (s1[i] != '\0')
		
	{
		
		sonamzi[i] = s1[i];
		
		i++;
		
	}
		
	
	while (s2[b] != '\0')
		
	{
		
		sonamzi[i] = s2[b];
		
		i++, b++;
		
	}
		
	sonamzi[i] = '\0';
		
	return (sonamzi);
		
}
