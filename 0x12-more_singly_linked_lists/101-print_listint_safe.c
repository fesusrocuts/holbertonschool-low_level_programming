#include "lists.h"
/**
 * print_listint_safe - size_t print_listint_safe(const listint_t *head);
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: the number of nodes in the list,otherwise exit(98)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *c, *s;

	c = head;
	if (c == NULL)
		exit(98);

	i = 0;
	while (c != NULL)
	{
		s = c;
		c = c->next;
		i++;
		printf("[%p] %d\n", (void *)s, s->n);

		if (s < c)
		{
			printf("-> [%p] %d\n", (void *)c, c->n);
			c = NULL;
		}
	}
	return (i);
}
