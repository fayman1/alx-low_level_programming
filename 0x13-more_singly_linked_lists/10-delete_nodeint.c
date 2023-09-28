#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: head of a list.
 * @index: index of the list where the node is deleted.
 *
 * Return: 1 if successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *s;
	listint_t *next;

	s = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && s != NULL; i++)
		{
			s = s->next;
		}
	}

	if (s == NULL || (s->next == NULL && index != 0))
	{
		return (-1);
	}

	next = s->next;

	if (index != 0)
	{
		s->next = next->next;
		free(next);
	}
	else
	{
		free(s);
		*head = next;
	}

	return (1);
}
