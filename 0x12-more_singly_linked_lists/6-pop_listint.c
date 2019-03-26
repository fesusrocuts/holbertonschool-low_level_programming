#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: the head node or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tn;
	int i = 0;

	if (!head || (*head) == NULL)
		return (0);

	i = (*head)->n;
	tn = *head;
	*head = (*head)->next;
	free(tn);
	return (i);
}
