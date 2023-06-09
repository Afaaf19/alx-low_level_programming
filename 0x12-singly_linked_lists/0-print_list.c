#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the ele,ents of a list
 * @h: parameter
 * Return: nb
 */
size_t print_list(const list_t *h)
{
	size_t nb = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		nb++;
		h = h->next;
	}
	return (nb);
}
