#include "main.h"
/**
 * *_strdup-returns a pointer to a newly allocated space in memory
 * *str:char
 *Return:char
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
		while (str[i] != '\0')
		{
			i++;
		}
	}
	printf("%s", str);
	str = malloc(sizeof(char) * i + 1);
	return (str);
}
