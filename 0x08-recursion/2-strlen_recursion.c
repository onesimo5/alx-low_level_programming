#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - returns length of a string
 * @s: string to be measured
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
