#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx: index to stop and add node
 * @n: value at the node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *c, *p;
	unsigned int i = 0;

	if (!h || idx < i || !n)
		return (NULL);

	c = *h;
	while (c != NULL && i < idx)
	{p = c;
		c = c->next;
		i++; }
	if (i == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		if (c != NULL && i > 0)
		{new->prev = c->prev;
			new->next = c;
			c->prev = new;
			if (new->prev != NULL)
				new->prev->next = new;
		}
		else if (c == NULL && p != NULL && i > 0)
		{p->next = new;
			new->prev = p; }
		else if (i == 0)
		{new->next = *h;
			if (new->next != NULL)
				new->next->prev = new;
			*h = new; }
		return (new);
	}
	return (NULL);
}
