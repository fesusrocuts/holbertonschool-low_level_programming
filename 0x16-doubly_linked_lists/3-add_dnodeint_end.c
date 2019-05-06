#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: double pointer with list
 * @n: value of n in nd node
 * Return: address of the nd element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nd, *nd2;

	if (head == NULL)
		return (NULL);
	nd = malloc(sizeof(dlistint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->next = NULL;
	if (*head == NULL)
	{
		nd->prev = NULL;
		*head = nd;
		return (nd);
	}
	nd2 = *head;
	while (nd2->next != NULL)
		nd2 = nd2->next;
	nd2->next = nd;
	nd->prev = nd2;
	return (nd);
}
