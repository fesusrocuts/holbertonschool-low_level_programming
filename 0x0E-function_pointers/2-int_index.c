#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - search for an integer
* @array: list of integers
* @size: number of elements in the array
* @cmp: pointer to the function to be use
* Return: the first element that make match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || *cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
			return (i);
	}
	return (-1);
}
