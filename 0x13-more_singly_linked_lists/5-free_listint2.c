#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: parameter
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *buff;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		buff = (*head)->next;
		free(*head);
		*head = buff;
	}
}
