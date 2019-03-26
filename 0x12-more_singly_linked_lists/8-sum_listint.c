#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: head of the linked list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *c;
	int sum = 0;

	c = head;

	while (c != NULL)
	{
		sum = sum + c->n;
		c = c->next;
	}
	return (sum);
}
