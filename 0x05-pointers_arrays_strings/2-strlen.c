#include "main.h"
/**
 * _strlen - check the length of a string
 * @s:input
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}

	return (length);
}
