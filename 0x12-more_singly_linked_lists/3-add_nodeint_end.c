#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *g;

	h = malloc(sizeof(listint_t));
	if (!h)
		return (NULL);
	h->n = n;
	h->next = NULL;
	if (!*head)
		*head = h;
	else
	{
		g = *head;
		while (g->next != NULL)
		{
			g = g->next;
		}
		g->next = h;
	}
	return (h);
}
