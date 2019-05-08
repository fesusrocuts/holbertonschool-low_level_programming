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
	dlistint_t *new, *prev;
	unsigned int i = 0;

	/*return error*/
	if (!h || idx < i || !n)
		return (NULL);

	/*reach the node until before idx*/
	prev = *h;
	while (prev != NULL && i < idx)
	{prev = prev->next;
		i++; }

	if (i == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		/*update node new*/
		if (prev != NULL && i > 0)
		{new->n = n;
			new->prev = prev;
			/*update prev of the node next*/
			if (prev->next != NULL)
				prev->next->prev = new;
			new->next = prev->next;
			prev->next = new; }
		else if (i == 0)
		{new->n = n;
			new->next = *h;
			if (new->next != NULL)
				new->next->prev = new;
			*h = new; }
		return (new);
	}
	return (NULL);
}
