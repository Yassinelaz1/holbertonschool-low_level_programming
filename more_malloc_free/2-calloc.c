#include "main.h"
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb:int
 * @size:int
 * Retutn:0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int *i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (allc != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			p[i] = 0;
		return (p);
	}
	else
		return (NULL);
}
