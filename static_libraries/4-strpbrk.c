#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - searchs a string for any of a set of bytes
 * @s: the string to search
 * @accept: the bytes to search for
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
