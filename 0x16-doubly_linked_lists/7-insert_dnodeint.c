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
	dlistint_t *nd, *nd2;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	nd = malloc(sizeof(dlistint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->next = NULL;
	nd->prev = NULL;
	nd2 = *h;
	while (i <= idx)
	{
		if (i == idx)
		{
			if (nd2 != NULL)
			{
				if (i > 0)
				{
					nd->prev = nd2->prev;
					nd->next = nd2->next;
					nd2->next = nd;
				}
				else
				{
					nd->next = nd2;
					*h = nd;
				}

			}
			else
			{
				*h = nd;
			}
			return (nd);
		}
		if (nd2 != NULL && nd2->next != NULL)
			nd2 = nd2->next;
		else
			break;
		i++;
	}
	free(nd);
	return (NULL);
}
