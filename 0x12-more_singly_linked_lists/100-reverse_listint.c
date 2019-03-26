#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of the linked list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rvs;
	listint_t *trvs;

	if (*head == NULL)
		return (NULL);
	rvs = *head;
	if (rvs == NULL)
		return (NULL);

	while (rvs->next != NULL)
	{
		trvs = rvs->next;
		rvs->next = trvs->next;
		trvs->next = *head;
		*head = trvs;
	}
	return (*head);
}
