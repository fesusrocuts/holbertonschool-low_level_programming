#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nh;
	
	/* if value 0 insert first of nodes, otherwise set into the end*/
	nh = malloc(sizeof(listint_t));
	if (!nh)
		return (NULL);

	nh->n = n;
	nh->next = *head;
	*head = nh;
	return (nh);
}
