#include <stdlib.h>
#include "search_algos.h"

/**
 * create_list - Creates a singly linked list from an array of integers
 * @array: Pointer to the first element of the array to convert
 * @size: Number of elements in the array
 *
 * Return: Pointer to the head of the newly created list
 */
listint_t *create_list(int *array, size_t size)
{
    listint_t *head = NULL, *node = NULL, *new_node = NULL;
    size_t i;

    for (i = 0; i < size; i++)
    {
        new_node = malloc(sizeof(listint_t));
        if (!new_node)
            return (NULL);
        new_node->n = array[i];
        new_node->index = i;
        new_node->next = NULL;
        if (!head)
            head = new_node;
        else
            node->next = new_node;
        node = new_node;
    }
    return (head);
}
