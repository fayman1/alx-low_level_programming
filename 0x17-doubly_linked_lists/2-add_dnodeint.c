#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *h;

	x = malloc(sizeof(dlistint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	x->next = h;

	if (h != NULL)
		h->prev = x;

	*head = x;

	return (x);
}

