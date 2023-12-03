#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list.
 * @head: dlistint_t **
 * @index: unsigned int
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head;

	if (head)
	{
		while (index && p)
		{
			p = p->next;
			index--;
		}
		if (!index && p)
		{
			if (p->next)
				p->next->prev = p->prev;
			if (p->prev)
				p->prev->next = p->next;
			else
				*head = p->next;
			free(p);
			return (1);
		}
	}

	return (-1);
}
