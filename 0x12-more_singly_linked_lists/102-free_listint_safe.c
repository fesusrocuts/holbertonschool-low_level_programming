#include "lists.h"
/**
 * free_listint_safe - that prints a listint_t linked list
 * @h: double pointer to head of linked list
 * Description: This function should work for circular lists
 * Return: size of the list or exit(98)
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *c, *s;
	size_t i;

	c = *h;
  i = 0;
	while (c != NULL)
	{
		i++;
		s = c;
		c = c->next;
		free(s);
		if (s < c)
			break;
	}
	*h = NULL;
	return (i);
}
