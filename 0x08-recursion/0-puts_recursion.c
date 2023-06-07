#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts_recursion - prints a string, follwed by a new line
 * @s: string to be printed
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n');
}
