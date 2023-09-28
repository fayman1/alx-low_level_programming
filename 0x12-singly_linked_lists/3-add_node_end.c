#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *w, *p;
	size_t nchar = strlen(str);

	w = malloc(sizeof(list_t));
	if (w == NULL)
		return (NULL);

	w->str = strdup(str);
	w->len = nchar;
	w->next = NULL;

	p = *head;
	if (p == NULL)
	{
		*head = w;
	}
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = w;
	}
	return (*head);
}


