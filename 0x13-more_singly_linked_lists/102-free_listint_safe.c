#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: void
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t v = 0;
	listp_t *x, *r, *a;
	listint_t *curr;

	x = NULL;

	for (; *h != NULL; v++)
	{
		r = malloc(sizeof(listp_t));

		if (r == NULL)
			exit(98);

		r->p = (void *)*h;
		r->next = x;

		x = r;

		a = x;

		while (a->next != NULL)
		{
			a = a->next;

			if (*h == a->p)
			{
				*h = NULL;
				free_listp2(&x);
				return (v);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
	}
	*h = NULL;
	free_listp2(&x);

	return (v);
}

