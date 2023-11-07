#include "main.h"
/**
 * *_strdup-
 * *str
 *
 */
char *_strdup(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '0')
		{
			i++;
		}
	}
	printf("%s", str);
	str = malloc(sizeof(char) * i + 1);
	return (str);
}
