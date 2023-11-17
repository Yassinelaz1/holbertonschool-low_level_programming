#include "function_pointers.h"
/**
 * array_iterator-a function that searches for an integer.
 * @array:pointer
 * @size:int
 * @cmp:function
 * Return:void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (size > 0 && array != NULL && cmp != NULL)
        for (i = 0; i < size; i++)
            if ((*cmp)(array[i]) == 1)
                return (i);
    return (-1);
}
