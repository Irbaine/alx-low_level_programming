#include <stdio.h>

/**
 * _strlen_recursion - measures the length of a string
 * @s: string to measure its length
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	s++;
	i = _strlen_recursion(s++);
	return (i + 1);
}
