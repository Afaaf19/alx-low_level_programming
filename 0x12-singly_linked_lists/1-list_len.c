#include "lists.h"
/**
 * list_len -  function that returns the number of elements in list_t
 * @h: parameter
 * Return: nb_elem
 */
size_t list_len(const list_t *h)
{
	size_t nb_elem;

	nb_elem = 0;
	while (h != NULL)
	{
		nb_elem += 1;
		h = h->next;
	}
	return (nb_elem);
}
