#include "main.h"
#include <string.h>
/**
 *str_concat -  function that concatenates two strings.
 *@s1: char
 *@s2: char
 * Return: void (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		len2 = strlen(s2);
	}
	do
	{
		p = malloc(len1 + len2 + 1);
	} while (p == NULL);
	p = strcpy(s1, s2);
	return (p);
}
