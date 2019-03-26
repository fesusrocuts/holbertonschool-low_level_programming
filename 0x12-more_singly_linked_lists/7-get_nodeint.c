#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node, set 0
 * Return: nth node or otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cn;

	if (head == NULL)
	{
		return (NULL);
	}
	cn = head;
	while (i < index)
	{
		if (cn->next == NULL)
			return (NULL);
		i++;
		cn = cn->next;
	}
	return (cn);
}
