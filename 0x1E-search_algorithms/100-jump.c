#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found
 *         or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step, prev, i;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);
    prev = 0;

    while (step < size && array[step] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)step, array[step]);
        prev = step;
        step += sqrt(size);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)prev, (unsigned long)step);

    for (i = prev; i < (step < size ? step : size); i++)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
