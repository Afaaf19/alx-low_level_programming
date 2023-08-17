#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list dlistint_t
 * @h: start node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != 0; i++)
		h = h->next;
	return (i);
}
