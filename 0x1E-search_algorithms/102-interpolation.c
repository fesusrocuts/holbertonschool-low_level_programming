#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 *
 * @array: array
 * @size: array size
 * @value: val to search
 *
 * Return: i of value, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, i;

	l = 0;
	h = size - 1;

	if (!array)
		return (-1);

	while (l <= h)
	{
		if (l == h)
		{
			if (array[l] == value)
				return (l);
			return (-1);
		}

		i = l + (((double)(h - l) / (array[h] - array[l]))
		* (value - array[l]));
		if (value < array[l] || value > array[h])
		{
			printf("Value checked array[%lu] is out of range\n", i);
			return (-1);
		}


		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		if (array[i] < value)
			l = i + 1;
		else
			h = i - 1;

	}
	return (-1);
}
