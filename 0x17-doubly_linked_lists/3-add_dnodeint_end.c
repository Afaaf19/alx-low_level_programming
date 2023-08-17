#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node to end of the list
 * @head: start node
 * @n: new node
 * Return: address of new element if success, NULL if else
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	curr = *head;
	if (*head)
	{
		while (curr && curr->next)
			curr = curr->next;
		curr->next = new;
		new->prev = curr;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
