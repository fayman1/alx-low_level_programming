#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));

	return (x ? (x->n = n, x->next = *head, *head = x, x) : NULL);
}

