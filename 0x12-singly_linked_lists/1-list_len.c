#include "lists.h"

/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; h = h->next)
	{
		x++;
	}
	return (x);
}
