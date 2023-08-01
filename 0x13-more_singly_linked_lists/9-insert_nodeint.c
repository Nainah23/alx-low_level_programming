#include "lists.h"

/**
 * insert_nodeint_at_index -at a specific position,
 * it inserts a new node in a linked list
 * @head: its a pointer to thelinked list first node
 * @i: index to where to add the new node
 * Return: returns a pointer to the new node , or Null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int i)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
}
