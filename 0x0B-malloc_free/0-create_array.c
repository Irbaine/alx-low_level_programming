#include "main.h"
#include <stdlib.h>

/**
 *create_array - A function which creates an array with malloc
 *@size: memory size
 *@c: character variable
 *Return: return a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char (*c0) = malloc(size);

	if (c0 == NULL || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(c0 + i) = c;
		i++;
	}
	return (c0);
}
