#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end;

	node_end = malloc(sizeof(list_t));

	if (node_end == NULL)
	{
		free(node_end);
		return (NULL);
	}

	node_end->str = strdup(str);

	if (node_end->str == NULL)
	{
		free(node_end);
		return (NULL);
	}
	node_end->len = strlen(str);
	node_end->next = NULL;

	if (*head == NULL)
		*head = node_end;
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = node_end;
	}
	return (node_end);
}
