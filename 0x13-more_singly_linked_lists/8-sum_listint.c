#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting nod
 */
int sum_listint(listint_t *head)
{
	int nod = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		nod += ptr->n;
		ptr = ptr->next;
	}

	return (nod);
}
