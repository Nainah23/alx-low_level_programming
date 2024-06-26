#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array of
  *	integers using Jump search algo.
  * @array: A pointer to the first element of the array to search in.
  * @size: The number of elements in array.
  * @value: The value to search for.
  *
  * Return: The first index where the value is located
  *	or -1 If the value is not present or the array is NULL.
  *
  * Description: Every time you compare a value in the array to the value
  *	you are searching for, you have to print this value
  *	Use the square root of the size of the array as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
