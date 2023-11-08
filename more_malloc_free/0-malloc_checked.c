#include "main.h"
/**
 * *malloc_checked-function that allocates memory using malloc
 * @b:int
 *
 */
void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
