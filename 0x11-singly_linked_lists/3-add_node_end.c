#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: double pointer
 * @str: string
 * Return: address or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nd, *tmp;
	size_t i = 0;

	nd = malloc(sizeof(list_t));
	if (nd == NULL)
		return (NULL);
	if (str != NULL)
	{
		nd->str = strdup(str);
		while (str[i] != '\0')
		{
			i++;
		}
		nd->len = i;
	}
	else
	{
		nd->str = NULL;
		nd->len = 0;
	}
	nd->next = NULL;
	if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		nd->next = NULL;
		tmp->next = nd;
	}
	else
		*head = nd;
	return (nd);
}
