#include "main.h"
#include <stdlib.h>
/**
* _strstr - locates a substring
* @haystack: the longer string to search
* @needle: the substring to search for
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int n = 0;

	while (needle[n] != '\0')
		n++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != n)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
