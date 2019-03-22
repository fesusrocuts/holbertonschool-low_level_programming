#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: head of the linked
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
