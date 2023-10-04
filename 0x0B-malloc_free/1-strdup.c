#include "main.h"

/**
 * _strdup - duplicate string to a pointer
 * @str: string to be duplicated
 *
 * Return: return null or a pointer to the duplicate
 */

char *_strdup(char *str)
{
	size_t length, i = 0;
	char *c0;

	if (!str)
		return (NULL);
	/* Get the str length */
	length = strlen(str) + 1;
	c0 = (char *)malloc(sizeof(char) * length);

	if (!c0)
		return (NULL);

	while (i <= length)
	{
		c0[i] = str[i];
		i++;
	}
	return (c0);
}
