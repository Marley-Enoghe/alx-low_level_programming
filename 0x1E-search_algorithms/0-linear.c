#include "search_algos.h"

/**
 * linear_search - For searching for a value in an array of
 * integers using This is the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t t;

	if (array == NULL)
	{
		return (-1);
	}

	for (t = 0; t < size; t++)
	{
		printf("Value checked array[%li] = [%i]\n", t, array[t]);
		if (array[t] == value)
		{
			return (t);
		}
	}
	return (-1);
}
