#include "main.h"
/**
 *rev_string - prints a string, in reverse, followed by a new line.
 *description
 *@s: char
 *Return: none
 */
void rev_string(char *s)
{
	int l, i;
	char swap[50];

	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		swap[i] = *(s + l - i - 1);
	}
	for (i = 0; i < l; i++)
		s[i] = swap[i];
}
