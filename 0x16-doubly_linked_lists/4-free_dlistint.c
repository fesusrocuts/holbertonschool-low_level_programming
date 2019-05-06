#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - free a dlistint_t lis
 * @head: double pointer with list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nd;

	while (head != NULL)
	{
		nd = head->next;
		free(head);
		head = nd;
	}
}
