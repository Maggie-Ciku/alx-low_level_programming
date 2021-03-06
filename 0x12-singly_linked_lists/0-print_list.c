#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
