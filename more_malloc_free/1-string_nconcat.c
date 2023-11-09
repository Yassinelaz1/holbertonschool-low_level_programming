#include "main.h"
/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n : limits of string 2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j;
	unsigned int n1 = 0;
	unsigned int n2 = 0;

	if (s1 != NULL)
	{
		n1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		n2 = strlen(s2);
	}
	if (n >= n2)
	{
		n = n2;
	}

	c = malloc((n1 + n + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		c[i] = s1[i];
	if (s2 != NULL)
	{
		for (j = 0; j < n; j++)
		{
			c[i] = s2[j];
			i++;
		}
	}
	c[i] = '\0';
	return (c);
}
