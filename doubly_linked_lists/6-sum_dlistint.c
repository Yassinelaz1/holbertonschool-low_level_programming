#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int sum;

	if (head == NULL)
		return (0);

	p = head;
	sum = 0;
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
