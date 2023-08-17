#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a node in a given position
 * @h: start node
 * @idx: index
 * @n: number
 * Return: Address of the new node if success, or NULL if else
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *curr = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
		i++;
	}

	if (curr == NULL)
		return (NULL);
	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = curr;
	new_n->next = curr->next;
	new_n->next->prev = new_n;

	return (new_n);
}

