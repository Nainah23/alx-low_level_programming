#include "lists.h"

/**
 * add_nodeint_end - It adds a new node after the list
 * @head: Its a pointer to the list's first element
 * @n: the information to be added in the new element
 *
 * Return: Its a pointer to the new node added, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
