#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: pointer argument 1
 * @s2: pointer argument 2
 *
 * Return: return the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len_1, len_2, total;
	char *s;

	if (!s1 && !s2)
	{
		s = (char *)malloc(sizeof(char) * 1);
		return (s);
	}
	else if (!s1 && s2)
	{
		return (dup(s2));
	}
	else if (s1 && !s2)
	{
		return (dup(s1));
	}
	else
	{
		len_1 = strlen(s1);
		len_2 = strlen(s2);
		total = len_1 + len_2 + 1;

		s = (char *)malloc(sizeof(char) * (total));

		if (!s)
			return (NULL);

		/* Add the first str */
		for (i = 0; i <= len_1; i++)
		{
			s[i] = s1[i];
		}

		/* Concat the second str */
		for (i = len_1, j = 0; i <= total; i++, j++)
		{
			s[i] = s2[j];
		}
		return (s);
	}
}

/**
 * dup - make a duplicate of the input string
 * @a: input string
 *
 * Return: pointer to the duplicate
 */

char *dup(char *a)
{
	unsigned int i, len;
	char *s;

	len = strlen(a);
	s = (char *)malloc(sizeof(char) * len);
	for (i = 0; i <= len; i++)
	{
		s[i] = a[i];
	}
	return (s);
}
