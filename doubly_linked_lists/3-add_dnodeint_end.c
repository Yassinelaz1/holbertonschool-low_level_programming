#include "lists.h"
/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: pointer
 *@n: string
 *Return: value of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	node->prev = temp;
	return (node);
}
