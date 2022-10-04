#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * or -1 if n is negative
 * @n: integer params
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
