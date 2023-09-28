#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *o = head;
	listint_t *a = head;

	if (!head)
		return (NULL);

	while (o && a && a->next)
	{
		a = a->next->next;
		o = o->next;
		if (a == o)
		{
			o = head;
			for (; o != a;)
			{
				o = o->next;
				a = a->next;
			}
			return (a);
		}
	}

	return (NULL);
}


