#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t add = 0;

	if (h == NULL)
		return (add);

	for (; h->prev != NULL; h = h->prev)
		;
	for (; h != NULL; h = h->next)
	{
		add++;
	}
	return (add);
}

