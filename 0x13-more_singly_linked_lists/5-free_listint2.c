#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *p;
	listint_t *b;

	if (head != NULL && *head != NULL)
	{
		for (b = *head; b != NULL;)
		{
			p = b;
			b = b->next;
			free(p);
		}
		*head = NULL;
	}
}

