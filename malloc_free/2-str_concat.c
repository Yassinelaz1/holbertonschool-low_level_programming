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
		return(NULL) ;
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		return(NULL);
	}
	else
	{
		len2 = strlen(s2);
	}
	do {
		p = malloc(len1 + len2 + 1);
	} while (p == NULL);
	strcpy(p, s1);
	strcat(p, s2);
	return (p);
}
