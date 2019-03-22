#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	const list_t *a;
	size_t c;

	c = 0;
	a = h;
	while (a != NULL)
	{
		a = a->next;
		c++;
	}

	return (c);
}
