#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: a pointer to the pointer to the first element of the list
 * @str: a string to store in the new element of the list
 * Return: the address of the new element, or NULL if it failed

 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    int i = 0;

    new_node = malloc(sizeof(list_t));
    if (new_node==NULL)
        return (NULL);

    new_node->str = strdup(str);
	while (str[i] != '\0')
		i++;
	new_node->len = i;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}