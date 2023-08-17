#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns  the nth node of dlistint_t
 * @head: start node
 * @index: the position of the node
 * Return: position if success, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *pos = head;
	size_t cnt = 0;

	while (pos != NULL)
	{
		if (cnt == index)
			return (pos);
		cnt++;
		pos = pos->next;
	}
	return (NULL);
}
