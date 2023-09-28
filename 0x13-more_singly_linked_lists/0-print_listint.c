#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodet = 0;

	if (h == NULL)
		return (0);
	do {
		printf("%d\n", h->n);
		h = h->next;
		nodet++;
	} while (h != NULL);
	return (nodet);
}

