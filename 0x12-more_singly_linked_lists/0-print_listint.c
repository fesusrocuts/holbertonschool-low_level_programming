#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
