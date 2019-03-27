#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer
 * @n: integer
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nd, *cn;

	nd = malloc(sizeof(listint_t));
	if (!nd)
		return (NULL);
	if (!*head)
	{
	nd->n = n;
	nd->next = NULL;
	*head = nd;
	}
	else
	{
		cn = *head;
		while (cn->next != NULL)
		{
			cn = cn->next;
		}
		nd->n = n;
		cn->next = nd;
	}
	return (nd);
}
