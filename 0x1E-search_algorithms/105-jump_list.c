#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located
 *         NULL if value is not present in list or if list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    listint_t *current = list;
    listint_t *prev_node = list;

    if (!list)
        return (NULL);

    while (current && current->index < size && current->n < value)
    {
        prev_node = current;
        for (prev = 0; current && prev < step; prev++)
            current = current->next;

        if (current)
            printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev_node->index,
           current ? current->index : size - 1);

    while (prev_node && prev_node->index <= (current ? current->index : size - 1))
    {
        printf("Value checked at index [%lu] = [%d]\n", prev_node->index, prev_node->n);
        if (prev_node->n == value)
            return (prev_node);
        prev_node = prev_node->next;
    }

    return (NULL);
}
