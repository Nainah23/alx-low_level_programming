#include "lists.h"

/**
 * add_nodeint - It adds a new node after the list
 * @head: Its a pointer to the list's first element
 * @n: the information to be added in the new element
 *
 * Return: Its a pointer to the new node added, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
