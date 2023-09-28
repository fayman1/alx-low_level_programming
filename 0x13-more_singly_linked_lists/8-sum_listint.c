#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	for (; head != NULL; head = head->next)
	{
		s += head->n;
	}
	return (s);
}

