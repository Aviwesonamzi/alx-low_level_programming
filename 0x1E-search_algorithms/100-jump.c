#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t curr = 0;
    size_t i;

    if (array == NULL)
        return (-1);

    while (curr < size && array[curr] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)curr, array[curr]);
        prev = curr;
        curr += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)prev, (unsigned long)curr);

    for (i = prev; i < size && i <= curr; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
