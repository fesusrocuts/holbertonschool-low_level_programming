#include "search_algos.h"

/**
 * minVal - Return min value
 * @val1: first value
 * @val2: second value
 * Return: Min value
 */

size_t minVal(size_t val1, size_t val2)
{
	if (val1 <= val2)
		return (val1);
	return (val2);
}

/**
 * printSearch - Print array in range
 * @array: array to print
 * @min: min range
 * @max: max range
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
 * exponential_search - searches for a value in a sorted array
 * @array: array
 * @size: array size
 * @value: val to search
 * Return: index of value, otherwise -1
 */


int exponential_search(int *array, size_t size, int value)
{
	size_t i, min, max, n;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		i *= 2;
	}


	min = i / 2;
	max = minVal(i, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", min, max);
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
