#include <stdio.h>
#include "../search_algos.h"

/**
 * print_skiplist - Prints a skip list
 * @list: Pointer to the head of the skip list
 */
void print_skiplist(const skiplist_t *list)
{
    const skiplist_t *node;

    printf("List :\n");
    for (node = list; node; node = node->next)
        printf("Index[%lu] = [%d]\n", (unsigned long)node->index, node->n);

    printf("\nExpress lane :\n");
    for (node = list; node; node = node->express)
        printf("Index[%lu] = [%d]\n", (unsigned long)node->index, node->n);
    printf("\n");
}
