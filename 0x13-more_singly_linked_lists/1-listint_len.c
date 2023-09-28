#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
	{
		n++;
	}
	return (n);
}

