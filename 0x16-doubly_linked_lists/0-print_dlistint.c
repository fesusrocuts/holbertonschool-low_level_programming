#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer type dlistint_t
 * Return: n elements of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	int tsort = 1;

	if (!h && h->prev != NULL)
		tsort = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		if (tsort == 1)
			h = h->next;
		else
			h = h->prev;

	}
	return (i);
}
