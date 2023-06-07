#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: number to be raised
 * @y: power
 * Return: vaule of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
