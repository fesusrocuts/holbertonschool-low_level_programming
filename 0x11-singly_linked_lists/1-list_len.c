#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list_t head of the linked
 * Return: numberof elements
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
