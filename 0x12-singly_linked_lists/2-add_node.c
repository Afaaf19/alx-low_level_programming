#include "lists.h"
/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: parameter 1
 * @str: parameter 2
 * Return: new_addr if success, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_addr;

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
	new_addr->next = head[0];
	head[0] = new_addr;
	return (new_addr);
}
