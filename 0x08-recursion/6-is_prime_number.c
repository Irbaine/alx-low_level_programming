#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if input integer is a prime number
 * @n: integer
 *
 * Return: 1 if the input integer is a prime number or 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0)
		return (0);
	return (prime_recursion(n, 9));
}

/**
 * prime_recursion - recursive function to perform iteration
 * @n: integer
 * @i: iteration limit
 *
 * Return: 1 if the input is a prime number or 0 otherwise
 */

int prime_recursion(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i == 2)
		return (1);
	return (prime_recursion(n, (i - 1)));
}
