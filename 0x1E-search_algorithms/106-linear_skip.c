#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list.
 * @value: Value to search for.
 *
 * Return: Pointer on the first node where value is located, or NULL if value
 * is not present or head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *express, *prev;

    if (!list)
        return (NULL);

    express = list;
    while (express->express)
    {
        printf("Value checked at index [%lu] = [%d]\n", (unsigned long)express->index, express->n);
        if (express->express->n >= value)
            break;
        express = express->express;
    }
    prev = express;
    while (express->next && express->n < value)
        express = express->next;

    printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)prev->index, (unsigned long)express->index);
    while (prev != express)
    {
        printf("Value checked at index [%lu] = [%d]\n", (unsigned long)prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }
    if (prev && prev->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", (unsigned long)prev->index, prev->n);
        return (prev);
    }

    return (NULL);
}
