#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t **ptr;

	w = malloc(sizeof(listint_t));

	if (w == NULL)
		return (NULL);

	w->n = n;
	w->next = NULL;

	ptr = head;
	while (*ptr != NULL)
	{
		ptr = &((*ptr)->next);
	}
	*ptr = w;

	return (*head);
}

