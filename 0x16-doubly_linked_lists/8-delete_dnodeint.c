#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - remove node for index
 * @head: list
 * @index: index to stop and remove node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	if (!head || index < i || *head == NULL)
		return (-1);

	curr = *head;
	while (curr != NULL && i < index)
	{curr = curr->next;
		i++; }

	if (i == index && curr != NULL)
	{
		if (curr->prev != NULL && curr->next == NULL)
			curr->prev->next = NULL;
		else if (curr->prev != NULL && curr->next != NULL)
		{
			curr->next->prev = curr->prev;
			curr->prev->next = curr->next;
		}
		else if (i == 0 && curr->next != NULL)
		{
			curr->next->prev = NULL;
			*head = curr->next;
		}
		else if (i == 0 && curr->next == NULL)
			*head = NULL;
		free(curr);
		return (1);
	}
	return (-1);
}
