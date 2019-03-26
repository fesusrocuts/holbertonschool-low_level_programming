#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of the linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cn;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		cn = *head;
		*head = (*head)->next;
		free(cn);
	}
}
