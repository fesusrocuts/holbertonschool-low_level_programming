#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: head of the linked list
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
