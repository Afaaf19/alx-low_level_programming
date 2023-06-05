#include "lists.h"
/**
 * listint_len -  function that returns the number of elements in a linked list
 * @h: parameter
 * Return: nbelem
 */
size_t listint_len(const listint_t *h)
{
	size_t nbelem;

	nbelem = 0;
	while (h != 0)
	{
		nbelem++;
		h = h->next;
	}
	return (nbelem);
}
