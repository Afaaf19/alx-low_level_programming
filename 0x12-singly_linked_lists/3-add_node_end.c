#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of  list_t list
 * @head: parameter 1
 * @str: parameter 2
 * Return: new_addr
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_addr, *next_node;

	new_addr = malloc(sizeof(list_t));
	if (new_addr == NULL)
		return (NULL);
	new_addr->str = strdup(str);
	if (new_addr->str == NULL)
	{
		free(new_addr);
		return (NULL);
	}
	new_addr->len = strlen(str);
	new_addr->next = NULL;
	if (*head == NULL)
	{
		*head = new_addr;
		return (new_addr);
	}

	next_node = *head;
	while (next_node->next != NULL)
		next_node = next_node->next;
	next_node->next = new_addr;
	return (new_addr);
}

