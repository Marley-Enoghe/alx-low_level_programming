#include "search_algos.h"

/**
 * binary_search - For searching for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: This is a pointer to first element of array to seach
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int t;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (t = low; t <= high; t++)
			printf("%i%s", array[t], t == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
