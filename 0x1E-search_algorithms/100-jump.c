#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 *
 * @array: array
 * @size: array size
 * @value: val to search
 * Return: index of value, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t r, step, i;

	if (!array)
		return (-1);

	r = sqrt(size);
	step = 0;
	while (step <= size - 1 && array[step] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", step, array[step]);
		step += r;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", step - r, step);
	for (i = step - r ; i <= (step) && i <= size - 1; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
