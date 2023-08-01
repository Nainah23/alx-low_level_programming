#include "lists.h"

/**
 * free_listint - sets free a linked list
 * @head: The listint_t list that ius to be set free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
