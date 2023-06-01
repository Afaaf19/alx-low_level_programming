#include "lists.h"
/**
 * free_list - function that frees list_t list
 * @head: ptr to the head of the linked list that must be free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *boo;

	while (head != NULL)
	{
		boo = head;
		 head = head->next;
		 free(boo->str);
		 free(boo);
	}
}
