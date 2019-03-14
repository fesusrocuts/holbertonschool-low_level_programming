#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - execute a function using array as params
* @array: params
* @size: dim
* @action: is the function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || *action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
