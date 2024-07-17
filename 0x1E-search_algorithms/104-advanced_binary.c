#include <stdio.h>
#include "search_algos.h"

/**
 * print_subarray - Prints the current subarray being searched
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray to print
 * @right: Right index of the subarray to print
 */
void print_subarray(int *array, size_t left, size_t right)
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
 * advanced_binary_recursive - Recursively searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray to search
 * @right: Right index of the subarray to search
 * @value: Value to search for
 *
 * Return: The first index where value is located
 *         -1 if value is not present in array or if array is NULL
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (left > right)
        return (-1);

    print_subarray(array, left, right);
    mid = left + (right - left) / 2;

    if (array[mid] == value && (mid == left || array[mid - 1] != value))
        return (mid);

    if (array[mid] >= value)
        return (advanced_binary_recursive(array, left, mid, value));
    return (advanced_binary_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   and returns the first index where value is located
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located
 *         -1 if value is not present in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);
    return (advanced_binary_recursive(array, 0, size - 1, value));
}
