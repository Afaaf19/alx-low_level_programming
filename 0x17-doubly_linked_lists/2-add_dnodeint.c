#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: start node
 * @n: new node
 * Return: address of the added element if success, NULL if else
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	else
		new->next = NULL;
	new->prev = NULL;
	*head = new;
	return (new);
}
