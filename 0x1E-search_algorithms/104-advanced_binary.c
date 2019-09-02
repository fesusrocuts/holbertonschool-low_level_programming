#include "search_algos.h"

/**
 * print_array - a function that prints out an array
 * @beg: pointer to the beginning of the array
 * @end: pointer to the end of the array
 * @array: array to search
 * Return: void
 */
void print_array(int beg, int end, int *array)
{
	printf("Searching in array: ");
	while (beg < end)
	{
		printf("%d", array[beg]);
		beg++;
		if (beg != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * search - recursive binary search function
 * @value: value to search
 * @low: low index as int
 * @high: high index as int
 * @array: array to search
 * Return: index of found value or -1 if not found
 */
int search(int value, int low, int high, int *array)
{
	int mid;

	if (high >= low)
	{
		print_array(low, high + 1, array);
		mid = (low + high) / 2;

		if (array[mid] == value && low == 0)
			return (mid);
		else if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		else if (array[mid] == value && array[mid - 1] == value)
			return (search(value, low, mid, array));
		else if (value < array[mid])
			return (search(value, low, mid - 1, array));
		else if (value > array[mid])
			return (search(value, mid + 1, high, array));
	}
	return (-1);
}

/**
 * advanced_binary - a function that searches for a value in an array of
 * integers using the Advanced Binary search algorithm (find first occ)
 * @array: input array to search
 * @size: size of the array
 * @value: value to search for
 * Return: first index where value is found or -1 if array NULL or not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size = (int)size;

	if (!array)
		return (-1);

	return (search(value, 0, size - 1, array));
}
