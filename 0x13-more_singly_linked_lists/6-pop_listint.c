#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: parameter
 * Return: n /the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n_data;
	listint_t *tmp;

	tmp = *head;
	if (*head == NULL)
		return (0);
	n_data = tmp->n;
	*head = tmp->next;

	free(tmp);
	return (n_data);
}
