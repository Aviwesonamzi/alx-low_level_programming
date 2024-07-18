#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "../search_algos.h"

/**
 * create_skiplist - Creates a skip list from an array of integers
 * @array: Pointer to the array of integers
 * @size: Size of the array
 *
 * Return: Pointer to the head of the skip list, or NULL on failure
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
    skiplist_t *list = NULL, *node, *express;
    size_t i;

    if (!array || size == 0)
        return (NULL);

    for (i = 0; i < size; i++)
    {
        node = malloc(sizeof(skiplist_t));
        if (!node)
            return (NULL);
        node->n = array[i];
        node->index = i;
        node->next = NULL;
        node->express = NULL;
        if (!list)
            list = node;
        else
        {
            express->next = node;
            if (i % (size_t) sqrt(size) == 0)
                express->express = node;
        }
        express = node;
    }
    return (list);
}
