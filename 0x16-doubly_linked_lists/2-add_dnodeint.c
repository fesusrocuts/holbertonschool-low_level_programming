#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: double pointer with list
 * @n: value of n in new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nd = NULL;

	if (!head)
		return (NULL);

	nd = malloc(sizeof(dlistint_t));
	if (!nd)
		return (NULL);

	nd->n = n;
	nd->next = *head;
	nd->prev = NULL;
	*head = nd;
	if (nd->next && nd->next->prev == NULL)
		nd->next->prev = nd;
	return (nd);
}
