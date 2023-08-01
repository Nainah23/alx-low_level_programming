#include "lists.h"

/**
 * listint_len - Produces the total element number in the linked lists
 * @h: listint_t linked list to be traversed
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
