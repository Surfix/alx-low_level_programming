#include "main.h"

/**
 * factorial - returns the factorial of a given number n
 *
 * @n: int
 *
 * Return: int
 */

int factorial(int n)
{

	int result;

	if (n == 1)
	{
		return (1);
	}

	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	result = n * factorial(n - 1);

	return (result);
