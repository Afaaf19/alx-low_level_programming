#include "lists.h"
/**
 * free_dlistint - function that frees dlistint list
 * @head: start node
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *following = head->next;

		free(head);
		head = following;
	}
}
