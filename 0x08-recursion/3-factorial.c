#include "main.h"

/**
 * factorial - prints a factorial using a recursion
 *@n: factorial variable
 * Return: returns an int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
