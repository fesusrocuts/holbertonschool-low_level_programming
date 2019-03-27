#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *c, *cf;

	if (head == NULL)
		return (NULL);

	c = cf = head;
	while (cf != c)
  {
		if (c->next)
			c = c->next;
		else
			return (NULL);

		if (cf->next->next)
			cf = cf->next->next;
		else
			return (NULL);
	}
	c = head;
	while (cf != c)
	{
		cf = cf->next;
		c = c->next;
	}
	return (c);
}
