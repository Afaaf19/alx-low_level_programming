#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given posit
 * @head: parameter 1
 * @idx: parameter 2
 * @n: parameter 3
 * Return: new_N
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *inode, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	inode = malloc(sizeof(listint_t));
	if (inode == NULL)
		return (NULL);
	inode->n = n;

	if (!idx)
	{
		inode->next = *head;
		*head = inode;

		return (inode);
	}
	tmp = *head;
	while (i < idx - 1)
	{
		if (tmp == NULL)
		{
			free(inode);
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}
	inode->next = tmp->next;
	tmp->next = inode;
	return (inode);
}
