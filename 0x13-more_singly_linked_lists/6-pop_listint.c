#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int nod;

	if (!head || !*head)
		return (0);

	nod = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (nod);
}
