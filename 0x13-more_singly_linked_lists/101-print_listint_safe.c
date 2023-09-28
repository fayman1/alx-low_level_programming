#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *t;
	listp_t *r;

	if (head)
	{
		r = *head;
		while ((t = r) != NULL)
		{
			r = r->next;
			free(t);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	listp_t *h, *w, *a;

	h = NULL;
	while (head)
	{
		w = malloc(sizeof(listp_t));

		if (w == NULL)
			exit(98);

		w->p = (void *)head;
		w->next = h;
		h = w;

		a = h;

		while (a->next != NULL)
		{
			a = a->next;
			if (head == a->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&h);
				return (x);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		x++;
	}

	free_listp(&h);
	return (x);
}
