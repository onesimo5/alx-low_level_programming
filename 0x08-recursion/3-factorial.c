#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - returns factorial of a given number
 * @n: number to find the factorial
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
