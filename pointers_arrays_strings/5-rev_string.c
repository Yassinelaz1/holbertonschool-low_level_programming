#include "main.h"
/**
 *rev_string - prints a string, in reverse, followed by a new line.
 *@s: char
 *Return: 0
 */
 void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
    {
		_putchar(s[i]);
        i++;
    }
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
