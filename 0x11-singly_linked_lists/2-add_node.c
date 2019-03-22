#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer
 * @str: string added
 * Return: address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nd;
	int t = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	nd = malloc(sizeof(list_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	nd->str = strdup(str);
	if (nd->str == NULL)
	{
		free(nd);
		return (NULL);
	}
	while (nd->str[t] != '\0')
	{
		t++;
		nd->len = t;
		nd->next = *head;
	}
	*head = nd;
	return (nd);
}
