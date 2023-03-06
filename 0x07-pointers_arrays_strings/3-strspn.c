#include "main.h"

/**
 * _strspn - Gets the length of the prefix substring
 * @s: The string to be measured
 * @accept: The prefix to measured
 * Return: The number of bytes in s which
 * consist only number of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
