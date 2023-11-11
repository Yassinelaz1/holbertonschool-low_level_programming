#include "main.h"
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb:int
 * @size:int
 * Retutn:0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	i = (void *)calloc(nmemb, size);
	while (i == NULL)
	{
		return (NULL);
	}
	return (i);
}
