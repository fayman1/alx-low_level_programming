#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *t;

	for (t = head; t != NULL; )
	{
		list_t *temp = t;

		t = t->next;

		free(temp->str);
		free(temp);
	}
}


