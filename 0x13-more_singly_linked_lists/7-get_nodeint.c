#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: argument 1
 * @index: argument 2
 * Return: inode
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *inode;
	unsigned int i;

	inode = head;
	if (inode == NULL)
		return (NULL);

	for (i = 0; inode != NULL && i < index; i++)
	{
		inode = inode->next;
	}
	return (inode);
}
