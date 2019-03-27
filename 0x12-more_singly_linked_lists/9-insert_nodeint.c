#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the linked list
 * @idx: index for new node
 * @n: value of node
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn = malloc(sizeof(listint_t));
	listint_t *tn;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	tn = *head;
	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	nn->n = n;
	nn->next = NULL;
	while (i < idx - 1)
	{
		if (tn->next == NULL)
			return (NULL);
		tn = tn->next;
		i++;
	}
	nn->next = tn->next;
	tn->next = nn;
	return (nn);
}
