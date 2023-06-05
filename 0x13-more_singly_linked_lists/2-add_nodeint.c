#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: parameter 1
 * @n: parameter 2
 * Return: head / new node at the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added;

	added = malloc(sizeof(listint_t));
	if (added == NULL)
		return (NULL);
	added->n = n;
	added->next = *head;
	*head = added;
	return (*head);
}
