#include "lists.h"

/**
 * pop_listint - removes the first node of a linked list
 * @head: is a pointer to the head element in the linked list
 * Return: the information in the deleted elements
 * or 0 in case of an empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
