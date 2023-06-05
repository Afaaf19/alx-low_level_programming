#include "lists.h"
/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: parameter
 * Return: nbnode
 */
size_t print_listint(const listint_t *h)
{
	size_t nbnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbnodes++;
	}
	return (nbnodes);
}
