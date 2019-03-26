#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cn;

	while (head != NULL)
	{
		cn = head;
		head = head->next;
		free(cn);
	}
}
