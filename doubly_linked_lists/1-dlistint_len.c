#include "lists.h"
/**
 * list_len - function that prints all the elements of a dlistint_t list.
 * @h:pointer
 * Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
