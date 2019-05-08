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
	dlistint_t *del, *prev;
	unsigned int i = 0;

	if (!head || index < i)
		return (-1);

	prev = *head;
	while (prev != NULL && i < index)
	{prev = prev->next;
		i++; }

	if (i == index && prev != NULL)
	{

		if (prev->next != NULL)
		{
			prev->next->next->prev = prev;
			prev->next = prev->next->next;
			del = prev->next;
			free(del);
			return (1);
		}
		else if (i == 0)
		{
			del = prev;
			free(del);
			return (1);
		}
	}
	return (-1);
}
