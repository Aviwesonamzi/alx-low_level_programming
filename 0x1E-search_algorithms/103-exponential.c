#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - Prints the current subarray being searched
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray to print
 * @right: Right index of the subarray to print
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * binary_search_exp - Searches for a value in a sorted array of integers
 *                     using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray to search
 * @right: Right index of the subarray to search
 * @value: Value to search for
 *
 * Return: The first index where value is located
 *         -1 if value is not present in array or if array is NULL
 */
int binary_search_exp(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        print_array(array, left, right);
        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located
 *         -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t left;
    size_t right;

    if (array == NULL)
        return (-1);

    if (array[0] == value)
        return (0);

    while (bound < size && array[bound] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    left = bound / 2;
    right = (bound < size) ? bound : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    return binary_search_exp(array, left, right, value);
}
