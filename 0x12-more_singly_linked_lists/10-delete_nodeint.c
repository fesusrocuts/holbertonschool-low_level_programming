#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list
 * @head: head of the linked list
 * @index: index where node needs to be deleted
 * Return: 1 succeeded or -1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t;
	listint_t *c;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	c = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}
	while (i < index - 1)
	{
		if (c->next == NULL)
			return (-1);
		c = c->next;
		i++;
	}
	t = c;
	t = t->next;
	c->next = t->next;
	free(t);
	return (1);
}
