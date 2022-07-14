#include "lists.h"
#include <stdlib.h>

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start of the linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
