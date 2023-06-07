#include "lists.h"
/**
 * sum_listint - function that calculates the sum of all the data of listint_t
 * @head: parameter
 * Return: sum if success, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;
	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}
	return (sum);
}
