#include "lists.h"
/**
 * free_listint - function that frees listint_t list
 * @head: parameter
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *freed;

	while (head != NULL)
	{
		freed = head;
		head = head->next;
		free(freed);
	}
}
