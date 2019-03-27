#include "lists.h"
/**
 * insert_nodeint_at_idx - inserts a node node at a given position
 * @head: head of the linked list
 * @idx: is the index of the list
 * @n: value of node
 * Return: address of node node or NULL
 */
listint_t *insert_nodeint_at_idx(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *c;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	c = *head;
	for (i = 1; c && i < idx; i++)
	{
		c = c->next;
		if (c == NULL)
			return (NULL);
	}

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;

	if (idx == 0)
	{
		*head = node;
		node->next = c;
	}
	else if (c->next)
	{
		node->next = c->next;
		c->next = node;
	}
	else
	{
		node->next = NULL;
		c->next = node;
	}
	return (node);
}
