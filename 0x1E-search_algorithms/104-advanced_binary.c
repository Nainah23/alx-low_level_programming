#include "search_algos.h"

/**
  * recursive_advanced_binary - Searches recursively for a value in a sorted
  *	array of integers using binary search algorithm.
  * @array: A pointer to the first element of the [sub]array to search in.
  * @left: The starting index of the [sub]array to search in.
  * @right: The ending index of the [sub]array to search in.
  * @value: The value to search for.
  *
  * Return: The index where the value is located
  *	or -1 If the value is not present.
  */
int recursive_advanced_binary(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced Binary search algo.
  * @array: A pointer to the first element of the array to search in.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: The index where the value is located
  * or -1 If the value is not present.
  * Description: Every time you split the array, you have to print the new
  *	array (or subarray) you’re searching in
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
