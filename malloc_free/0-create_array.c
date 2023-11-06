#include "main.h"
/**
 * create_array - create an array of chars, and initialize with specific char
 * @c: specific char
 * @size: size of array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i;

	if (array == NULL || size == 0)
		return (NULL);
		
	for (i = 0; i <= size; i++)
		array[i] = c;

	return (array);
}
