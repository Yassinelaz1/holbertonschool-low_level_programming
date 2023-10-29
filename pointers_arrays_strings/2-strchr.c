#include "main.h"
/**
 * _strchr -locate a character in a string
 * @s: string to be executed
 * @c: charachter to search for
 * Return: char*
 */
char *_strchr(char *s, char c)
{
	int len, i = 0;

	len = strlen(s);
	while (i < len + 1)
	{
		if (s[i] == c)
		{
			s = s + i;
			break;
		}
		i++;
	}
	if (*s != c)
		return (NULL);
	return (s);
}
