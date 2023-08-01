#include "lists.h"

/**
 * sum_listint - totals the sum of all the listint_t list data
 * @head: first node in the linked list
 *
 * Return: the sum that results
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum+= temp->n;
		temp = temp->next;
	}
	return (sum);
}
