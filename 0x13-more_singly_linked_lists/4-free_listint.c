#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	for (; head != NULL;)
	{
		p = head;
		head = head->next;
		free(p);
	}
}

