#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements list
 * @h: list
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	const list_t *ct;
	size_t c;

	c = 0;
	ct = h;
	while (ct != NULL)
	{
		printf("[%d] %s\n", ct->len, ct->str);
		ct = ct->next;
		c++;
	}
	return (c);
}
