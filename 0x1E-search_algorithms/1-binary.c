#include "search_algos.h"

/**
 * printSearch - Print array in range
 *
 * @array: array to print
 * @min: min range
 * @max: max range
 *
 */

void printSearch(int *array, size_t min, size_t max)
{
	int first = 0;
	size_t i;


	printf("Searching in array: ");
	for (i = min ; i <= max ; i++)
	{
		if (first != 0)
			printf(", ");
		printf("%i", array[i]);
		first = 1;
	}
	printf("\n");
}


/**
 * binary_search - Searche for a value in a sorted array of integers
 *
 * @array: array
 * @size: size array
 * @value: Value to search
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min, max, n;

	if (!array)
		return (-1);
	min = 0;
	max = size - 1;
	while (min <= max)
	{
		printSearch(array, min, max);
		n = (max + min) / 2;
		if (array[n] < value)
			min = n + 1;
		else if (array[n] > value)
			max = n - 1;
		else
			return (n);
	}
	return (-1);
}
