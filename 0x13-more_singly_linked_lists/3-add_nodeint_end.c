#include "lists.h"
/**
* add_nodeint_end - function that adds a new node at the end of a listint_t
* @head: parameter 1
* @n: parameter 2
* Return: add_end
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *add;
listint_t *tmp = *head;

add = malloc(sizeof(listint_t));
if (add == NULL)
return (NULL);
add->n = n;
add->next = NULL;
if (*head == NULL)
{
*head = add;
return (add);
}
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = add;
return (add);
}
