#include "function_pointers.h"
/**
 * array_iterator-executes a function
 * @array:pointer
 * @size:int
 * @action:function
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (size > 0 && array != NULL && action != NULL)
	{
		for (s = 0; s < size; s++)
			(*action)(array[s]);
	}
}
