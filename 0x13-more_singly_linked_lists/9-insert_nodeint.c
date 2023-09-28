#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list added
 * @n: integer element.
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *e;
	listint_t *j;

	j = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && j != NULL; i++)
		{
			j = j->next;
		}
	}

	if (j == NULL && idx != 0)
		return (NULL);

	e = malloc(sizeof(listint_t));

	if (e == NULL)
		return (NULL);

	e->n = n;

	if (idx == 0)
	{
		e->next = *head;
		*head = e;
	}

	else
	{
		e->next = j->next;
		j->next = e;
	}
	return (e);
}

